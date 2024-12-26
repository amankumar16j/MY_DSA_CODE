#include<iostream>
#include<vector>
using namespace std;

int combi(int i,int j,vector<vector<int>> &dp){
    if(j==0 || i-j==0) return 1;
    if(j==1 || i-j==1) return i;

    if(dp[i][j]!=-1) return dp[i][j];

    return dp[i][j]=combi(i-1,j-1,dp)+combi(i-1,j,dp);
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> dp(2*n+1,vector<int>(n+1,-1));
    cout<<combi(2*n,n,dp);
}