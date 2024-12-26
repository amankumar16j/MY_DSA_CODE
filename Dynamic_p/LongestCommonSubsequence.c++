#include<iostream>
#include<vector>
using namespace std;

int help(int i,int j,string &s1,string &s2,string &s3,vector<vector<int>> &dp){
    if(i>=s1.size() || j>=s2.size()){
        return 0;
    }

    if(dp[i][j]!=-1) return dp[i][j];

    if(s1[i]==s2[j]){
        return dp[i][j]=1+help(i+1,j+1,s1,s2,s3,dp);
    } 
    else{
        return dp[i][j]=max(help(i+1,j,s1,s2,s3,dp),help(i,j+1,s1,s2,s3,dp));
    }
}



int main(){
    string s1="qdesabcdei";
    string s2="abcde";
    string s3="";
    vector<vector<int>> dp(s1.size()+1,vector<int>(s2.size()+1,-1));
    // vector<vector<int>> dp(100,vector<int>(100,-1));

    cout<<help(0,0,s1,s2,s3,dp)<<endl;
    // cout<<s3;

}