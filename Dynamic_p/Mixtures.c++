// https://www.spoj.com/problems/MIXTURES/

#include<iostream>
#include<vector>
using namespace std;

int sum(vector<int> vec, int i,int k){
    int sum=0;
    for(int a=i;a<=k;a++){
        sum+=vec[a];
    }
    return sum;
}

int helper(vector<int> vec,int i,int k,vector<vector<int>> &dp){

    if(k-i==0) return 0;
    if(k-i==1) return vec[i]*vec[k];

    if(dp[i][k]!=-1) return dp[i][k];
    int mini=1e9;
    for(int j=i+1;j<=k;j++){
        mini=min(mini,((sum(vec,i,j-1)%100)*(sum(vec,j,k)%100))+helper(vec,i,j-1,dp)+helper(vec,j,k,dp));
    }

    return dp[i][k]=mini;
}

// int bottom_up(vector<int> vec){
//     int n=vec.size();
//     vector<vector<int>> dp(n,vector<int>(n,0));

//     for(int len=2;len<=n;len++){
//         for(int i=0;i)
//     }
    
// }

int main(){
    // int n;
    // cin>>n;
        int n1;
        while(cin>>n1){
        // int n1;
        // cin>>n1;
        vector<vector<int>> dp(n1,vector<int>(n1,-1));
        vector<int> vec1(n1,0);
        for(int a=0;a<n1;a++){
            cin>>vec1[a];
        }
        cout<<helper(vec1,0,n1-1,dp)<<endl;
    }
}