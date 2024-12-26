// Problem: Coin Combinations II (Unique Combinations Only)
// https://cses.fi/problemset/task/1635/

#include <iostream>
#include <vector>
using namespace std;

#define M 1000000007

// Recursive function with memoization
int solve(int i, int sum, int &target, vector<int> &coins, vector<vector<int>> &dp) {
    // Base cases
    if (sum == target) return 1; // Found a valid combination
    if (sum > target || i == coins.size()) return 0; // Invalid state

    // Check if already computed
    if (dp[sum][i] != -1) return dp[sum][i];

    // Recursive case: Pick or Skip the current coin
    int ways = 0;
    ways = (ways + solve(i, sum + coins[i], target, coins, dp)) % M; // Pick the coin
    ways = (ways + solve(i + 1, sum, target, coins, dp)) % M;       // Skip the coin

    // Store result in dp table
    return dp[sum][i] = ways;
}

int main() {
    int ncoin, target;
    cin >> ncoin >> target;

    vector<int> coins(ncoin);
    for (int i = 0; i < ncoin; i++) {
        cin >> coins[i];
    }

    // Initialize memoization table
    vector<vector<int>> dp(target + 1, vector<int>(ncoin, -1));

    // Solve the problem starting from the first coin and sum 0
    cout << solve(0, 0, target, coins, dp) << endl;

    return 0;
}
