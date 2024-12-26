#include <iostream>
#include <vector>
using namespace std;


int fun(int i,int j,int n,vector<vector<int>> &vec,vector<vector<int>> &arr){
    if(i>=n) return 0;
    if(vec[i][j]!=-1) return vec[i][j];
    int a=0,b=0,c=0;
    if(j!=0){
        a=arr[i][j]+fun(i+1,0,n,vec,arr);
    }
    if(j!=1){
        b=arr[i][j]+fun(i+1,1,n,vec,arr);
    }
    if(j!=2){
        c=arr[i][j]+fun(i+1,2,n,vec,arr);
    }
    return vec[i][j]=max(max(a,b),c);
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(3,0));
    vector<vector<int>> vec(n,vector<int>(3,-1));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int a=fun(0,0,n,vec,arr);
    int b=fun(0,1,n,vec,arr);
    int c=fun(0,2,n,vec,arr);
    int val=max(max(a,b),c);
    cout<<val;
}

// int fun(int i, int j, int n, vector<vector<int>> &vec, vector<vector<int>> &arr) {
//     if (i >= n) return 0;
//     if (vec[i][j] != -1) return vec[i][j];

//     int a = 0, b = 0, c = 0;
//     if (j != 0) a = arr[i][j] + fun(i + 1, 0, n, vec, arr);
//     if (j != 1) b = arr[i][j] + fun(i + 1, 1, n, vec, arr);
//     if (j != 2) c = arr[i][j] + fun(i + 1, 2, n, vec, arr);
//     return vec[i][j] = max(max(a, b), c);
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<vector<int>> arr(n, vector<int>(3, 0));
//     vector<vector<int>> vec(n, vector<int>(3, -1));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     int a = fun(0, 0, n, vec, arr);
//     int b = fun(0, 1, n, vec, arr);
//     int c = fun(0, 2, n, vec, arr);
//     int val = max(max(a, b),c);
//     cout << val << endl;

//     return 0;
// }
