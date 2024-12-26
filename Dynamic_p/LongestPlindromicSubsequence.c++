#include<iostream>
#include<vector>
using namespace std;

int check(int i,int j,string &st, vector<vector<int>> &dp)
{
    if(i>j) return 0;
    if(i==j) return 1;

    if(dp[i][j]!=-1) return dp[i][j];

    if(st[i]==st[j]){
        return dp[i][j]=2+check(i+1,j-1,st,dp);
    }
    return dp[i][j]=max(check(i+1,j,st,dp),check(i,j-1,st,dp));
}
int main(){
    string st="cdefldabacdeb";
    vector<vector<int>> dp(1001,vector<int>(1001,-1));
    // string st="daad";
    cout<<check(0,st.size()-1,st,dp);
}
