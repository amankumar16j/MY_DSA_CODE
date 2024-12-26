#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int dp[10001][10001];
int sell(int i,int j,vector<int> &vec){
    int n=vec.size();
    if(j-i==1){
        if(vec[j]-vec[i]>0){
            return vec[j]-vec[i];
        }
        else{
            return 0;
        }
    }
    if(j-i<=0){
        return 0;
    }

    if(dp[i][j]!=-1) return dp[i][j];

    int ans=-1;
    for(int k=i+1;k<j;k++){
        dp[i][j]=max(dp[i][j],(sell(i,k,vec)+sell(k,j,vec)));
    }
    return dp[i][j];
}

int main(){
    vector<int> vec={7,1,5,3,6,4};
    memset(dp,-1,sizeof dp);
    cout<<sell(0,vec.size()-1,vec);

    
}
