#include<iostream>
#include<vector>
using namespace std;

int helper(int i,int j,vector<int> vec,vector<vector<int>> &dp){

    if(j-i==1) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=10000000000;
    for(int k=i+1;k<j;k++){
        ans=min(ans,(helper(i,k,vec,dp)+helper(k,j,vec,dp)+vec[i]*vec[j]*vec[k]));
    }
    return dp[i][j]=ans;
}


int main(){
    vector<int> vec={10,20,30,40,40,20,10,30,20,40,10,30,40,20,10,30,20,40,10,30,20,40,10,30,20,40,10,30,10,30,40,20,10};
    // vector<int> vec={4,2,3};
    int n=vec.size();
    vector<vector<int>> dp(n,vector<int>(n,-1));
    cout<<helper(0,n-1,vec,dp);
}
