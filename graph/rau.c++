#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

struct Node {
    int x, y;       // Coordinates of the current cell
    string path;    // Path taken to reach this cell
};

bool isValid(int x, int y, const vector<vector<char>> &grid, vector<vector<bool>> &visited) {
    int rows = grid.size();
    int cols = grid[0].size();
    return x >= 0 && y >= 0 && x < rows && y < cols && grid[x][y] == 'F' && !visited[x][y];
}

string findPath(vector<vector<char>> &grid, pair<int, int> start, pair<int, int> end) {
    int rows = grid.size();
    int cols = grid[0].size();
    
    // Direction vectors for L, R, U, D
    vector<pair<int, int>> directions = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
    vector<char> dirSymbols = {'L', 'R', 'U', 'D'};
    
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    queue<Node> q;
    
    // Initialize BFS
    q.push({start.first, start.second, ""});
    visited[start.first][start.second] = true;
    
    while (!q.empty()) {
        Node curr = q.front();
        q.pop();
        
        // Check if we reached the destination
        if (curr.x == end.first && curr.y == end.second) {
            return curr.path;
        }
        
        // Explore neighbors
        for (int i = 0; i < 4; ++i) {
            int nx = curr.x + directions[i].first;
            int ny = curr.y + directions[i].second;
            
            if (isValid(nx, ny, grid, visited)) {
                visited[nx][ny] = true;
                q.push({nx, ny, curr.path + dirSymbols[i]});
            }
        }
    }
    
    // No path found
    return "";
}

int main() {
    // Example grid: 'W' -> Wall, 'F' -> Floor
    vector<vector<char>> grid = {
        {'F', 'F', 'F', 'W'},
        {'F', 'F', 'F', 'W'},
        {'F', 'W', 'W', 'F'},
        {'F', 'F', 'F', 'F'}
    };
    
    pair<int, int> start = {0, 0}; // Starting position (row, col)
    pair<int, int> end = {3, 3};   // Destination position (row, col)
    
    string path = findPath(grid, start, end);
    if (path.empty()) {
        cout << "No path found" << endl;
    } else {
        cout << "Path: " << path << endl;
    }
    
    return 0;
}
