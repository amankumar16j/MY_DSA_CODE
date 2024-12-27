#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int prof(const vector<int>& prc, const string& s, int i, int buy, vector<vector<int>>& dp, const vector<int>& pred) {
    if (i == prc.size()) return 0;  // Base case: no more elements to process.
    
    if (dp[i][buy] != -1) return dp[i][buy];  // Return already computed result.
    
    int ans;
    if (buy) {  // If we can start a new operation
        if (s[i] == 'L') {
            // Option 1: Start an operation by taking this 'L' and searching for a future 'R'.
            ans = max(-pred[i]+prof(prc, s, i + 1, 0, dp, pred),  // Take this 'L' and search for 'R'
                      prof(prc, s, i + 1, 1, dp, pred));          // Skip this 'L'
        } else {
            // Cannot start a new operation with 'R', skip this index.
            ans = prof(prc, s, i + 1, 1, dp, pred);
        }
    } else {  // If we are closing an operation
        if (s[i] == 'R') {
            // Option 1: Close the operation by pairing this 'R' with the last 'L'
            ans = max(pred[i] + prof(prc, s, i + 1, 1, dp, pred),  // Close the operation
                      prof(prc, s, i + 1, 0, dp, pred));           // Skip this 'R'
        } else {
            // Cannot close an operation with 'L', skip this index.
            ans = prof(prc, s, i + 1, 0, dp, pred);
        }
    }
    
    return dp[i][buy] = ans;  // Memorize the result.
}

int maxScore(const vector<int>& prc, const string& s) {
    int n = prc.size();
    vector<vector<int>> dp(n, vector<int>(2, -1));  // DP table initialized to -1
    
    vector<int> pred(n);
    pred[0] = prc[0];
    for(int i = 1; i < n; i++) {
        pred[i] = prc[i] + pred[i - 1];
    }

    return prof(prc, s, 0, 1, dp, pred);  // Start from index 0 with the ability to "buy" (find 'L')
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        string s;
        cin >> s;
        
        cout << maxScore(a, s) << endl;
    }
    
    return 0;
}
