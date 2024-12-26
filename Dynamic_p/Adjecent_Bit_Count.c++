#include<iostream>
#include<vector>
using namespace std;

int adjecentBitCount(int curr,int i,int k,int last,vector<vector<vector<int>>> &dp){

    if(i<0){
        return 0;
    }


    if(dp[i][k][last]!=-1) return dp[i][k][last];
    if(last==1 && curr==1){
        k--;
    }
    
    if(i==0 && k==0){
        return 1;
    }
    else return 0;

    return dp[i][k][last]=adjecentBitCount(1,i-1,k,curr,dp)+adjecentBitCount(0,i-1,k,curr,dp);

}

int main(){
    int n,sum;
    cin>>n>>sum;
    vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(sum+1,vector<int>(2,-1)));
    cout<<adjecentBitCount(0,n,sum,0,dp);
}