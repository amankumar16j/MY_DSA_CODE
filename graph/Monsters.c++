#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

// Direction vectors for movements
vector<pair<int, int>> directions = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

// Function to check if a cell is within bounds and walkable
bool isValid(int x, int y, int n, int m, vector<vector<char>>& grid) {
    return x >= 0 && y >= 0 && x < n && y < m && grid[x][y] != '#';
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));
    vector<vector<int>> monsterDist(n, vector<int>(m, 1e9));
    vector<vector<int>> personDist(n, vector<int>(m, -1));
    pair<int, int> start;
    queue<pair<int, int>> monsterQueue;

    // Input grid and initialize distances
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') {
                start = {i, j};
            } else if (grid[i][j] == 'M') {
                monsterQueue.push({i, j});
                monsterDist[i][j] = 0;
            }
        }
    }

    // Multi-source BFS for monsters
    while (!monsterQueue.empty()) {
        auto x = monsterQueue.front().first;
        auto y= monsterQueue.front().second;
        monsterQueue.pop();

        for (const auto& dir : directions) {
            int nx = x + dir.first, ny = y + dir.second;
            if (isValid(nx, ny, n, m, grid) && monsterDist[nx][ny] > monsterDist[x][y] + 1) {
                monsterDist[nx][ny] = monsterDist[x][y] + 1;
                monsterQueue.push({nx, ny});
            }
        }
    }

    // Single-source BFS for the person
    queue<pair<int, int>> personQueue;
    personQueue.push(start);
    personDist[start.first][start.second] = 0;
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));
    vector<vector<char>> moveDir(n, vector<char>(m, '.'));

    while (!personQueue.empty()) {

        auto x=personQueue.front().first;
        auto y=personQueue.front().second;
        personQueue.pop();

        // Check if we reached the boundary
        if (x == 0 || y == 0 || x == n - 1 || y == m - 1) {
            // Path reconstruction
            string path;
            while (parent[x][y] != make_pair(-1, -1)) {
                path += moveDir[x][y];
                int px = parent[x][y].first;
                int py = parent[x][y].second;
                x = px;
                y = py;
            }
            reverse(path.begin(), path.end());

            cout << "YES\n";
            cout << path.size() << "\n";
            cout << path << "\n";
            return 0;
        }

        for (const auto& dir : directions) {
            int nx = x + dir.first, ny = y + dir.second;
            char move;
            if (dir == make_pair(1, 0)) move = 'D';
            if (dir == make_pair(-1, 0)) move = 'U';
            if (dir == make_pair(0, 1)) move = 'R';
            if (dir == make_pair(0, -1)) move = 'L';

            if (isValid(nx, ny, n, m, grid) && personDist[nx][ny] == -1 &&
                personDist[x][y] + 1 < monsterDist[nx][ny]) {
                personDist[nx][ny] = personDist[x][y] + 1;
                parent[nx][ny] = {x, y};
                moveDir[nx][ny] = move;
                personQueue.push({nx, ny});
            }
        }
    }

    // If no path found
    cout << "NO\n";
    return 0;
}
