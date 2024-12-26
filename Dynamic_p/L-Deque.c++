#include<iostream>
#include<vector>
using namespace std;
long long fun(int i,int j,vector<long long> &vec,vector<vector<long long>> &dp){
    if(j-i==0) return vec[i];
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]=max((vec[i]-fun(i+1,j,vec,dp)),(vec[j]-fun(i,j-1,vec,dp)));
}
int main(){
    int n;
    cin>>n;
    vector<long long> ques(n);
    vector<vector<long long>> dp(n+1,vector<long long>(n+1,-1));
    for(int i=0;i<n;i++){
        cin>>ques[i];
    }
    cout<<fun(0,n-1,ques,dp);
}