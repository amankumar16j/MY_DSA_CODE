#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num, mon, kit, dic = 1;
    cin >> num >> mon;

    // Adjacency list using vector
    vector<vector<int>> fulli(num);

    // Read edges
    for (int i = 0, u, v; i < mon; ++i) {
        cin >> u >> v;
        --u; --v; // Convert 1-based input to 0-based
        fulli[u].push_back(v);
        fulli[v].push_back(u);
    }

    cin >> kit;

    vector<bool> w(num, true);
    int po = num; // Initial active nodes count

    // Simulation loop
    while (po < kit) {
        vector<bool> nw = w; // Create a copy of current state
        
        // Iterate over all nodes
        for (int i = 0; i < num; ++i) {
            int cnt = 0;
            for (int fr : fulli[i]) {
                cnt += w[fr]; // Count active neighbors
            }

            if (w[i] && cnt == 3) nw[i] = true;        // Rule 1
            else if (!w[i] && cnt < 3) nw[i] = true;  // Rule 2
            else nw[i] = false;                       // Otherwise
        }

        // Update active node count
        int new_po = count(nw.begin(), nw.end(), true);

        if (new_po == po) break; // Early termination if no change
        po = new_po;
        w = nw;
        ++dic;
    }

    cout << dic << endl;
    return 0;
}
