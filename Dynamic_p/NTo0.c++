/*

find problem at:-    https://cses.fi/problemset/task/1637

to find minimum no. of step to convert n to 0;
you can subtract the number using one of its digit

input: 27
output: 5
*/


#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_set>
using namespace std;


void fun1(int n){
    int inf=INT_MAX;
    vector<int> vec(n+1,inf);
    vec[0]=0;
    vec[1]=1;
    vec[2]=1;
    for(int i=3;i<=n;i++){
        int mini=INT_MAX;
        int t=i;
        while(t>0){
            int rem=t%10;
            mini=min(mini,vec[i-rem]);
            t=t/10;
        }
        vec[i]=1+mini;
    }
    cout<<vec.at(n);
}

int fun2(int n,vector<int> &vec){

    if(n==0) return 0;
    else if(n<=9) return 1;
    else if(vec[n]!=INT_MAX) return vec[n];
    int t=n;
    int mini=INT_MAX;
    while(t>0){
        int rem=t%10;
        if(rem!=0)
            mini=min(mini,fun2(n-rem,vec));
        t=t/10;
    }
    vec[n]=1+mini;
    return vec[n];
}


// coin change problem

void coincounter(int n){
    int inf=10000000;
    vector<int> vec(n+1,inf);
    vec[0]=0;
    vector<int> set={1};

    for(int i=1;i<=n;i++){
        int mini=inf;
        for(auto t:set){
            if(t<=i)
                mini=min(mini,vec[i-t]);
        }
        vec[i]=1+mini;
    }
    if(vec[n]>=inf){
        cout<<-1;
    }
    else
        cout<<vec.at(n);
}






int main(){
    int n;
    cin>>n;
    vector<int> vec(n+1,10000000);
    // fun1(n);
    // int ans=fun2(n,vec);   
    // cout<<ans;

    coincounter(n);
}