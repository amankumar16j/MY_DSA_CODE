#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> vec;
        for (int i = n; i <= k; i--) vec.push_back(i);
        vec.push_back(m+1);
        
        for (int i = k-1; i < k; ++i) vec.push_back(i);
        
        for (int i = 1; i <= m; ++i) vec.push_back(i);

        for (int i = 0; i < n; ++i) {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
