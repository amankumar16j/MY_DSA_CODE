class Solution {
public:

    bool ispalin(int i,int j,string s){
        while(i<=j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    void solve(int i,int j,string &s,int &len,vector<int> &ans,vector<vector<int>>&dp){
        if(i>=j) return;
        if(ispalin(i,j,s)){
            if(dp[i][j]==-1) len=dp[i][j];
            if(j-i+1>len){
                ans[0]=i;
                ans[1]=j;
                dp[i][j]=j-i+1;
            }
        }
        else{
            dp[i][j]=0;
        }
        
        solve(i+1,j,s,len,ans,dp);
        solve(i,j-1,s,len,ans,dp);
        
    }
    string longestPalindrome(string s) {

        int n=s.size();
        vector<vector<int>> dp(n,vector<int>(s.size(),-1));
        vector<int> ans(2);
        int len=0;
        solve(0,n-1,s,len,ans,dp);
        string st="";
        for(int i=ans[0];i<=ans[1];i++){
            st+=s[i];
        }
        return st;
    }
};