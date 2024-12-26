// https://www.hackerearth.com/problem/algorithm/mancunian-and-k-ordered-lcs-e6a4b8c6/

#include <iostream>
#include<vector>
#include<cstring>
using namespace std;
int dp[2001][2001][6];
int lcs(int i,int j,vector<int> &st1,vector<int> &st2,int k){
    if(i>=st1.size() || j>=st2.size()){
        return 0;
    }

    if(dp[i][j][k]!=-1) return dp[i][j][k];
    if(st1[i]==st2[j]){
        return dp[i][j][k]= 1+lcs(i+1,j+1,st1,st2,k);
    }

    return dp[i][j][k]=max(max(lcs(i+1,j,st1,st2,k),lcs(i,j+1,st1,st2,k)),(k>0?1+lcs(i+1,j+1,st1,st2,k-1):0));
}

int main(){
	int n1,n2,k;
	cin>>n1>>n2>>k;
	memset(dp,-1,sizeof dp);
	vector<int> st1(n1);
	for(int i=0;i<n1;i++){
		cin>>st1[i];
	}
	vector<int> st2(n2);
	for(int i=0;i<n2;i++){
		cin>>st2[i];
	}
    cout<<lcs(0,0,st1,st2,k);
} 
