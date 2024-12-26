// https://cses.fi/problemset/task/1633

#include<iostream>
#include<vector>
using namespace std;
#define mod 1000000007 

int fun2(int n,vector<int> &vec){
    
    if(n==0) return 0;
    else if(vec[n]!=-1) return vec[n];
    int mini=0;
    int t=6;
    while(t>0){
        if(t<=n)
            mini=(mini%mod+fun2(n-t,vec)%mod)%mod;
        t--;
    }
    if(n<=6)
    vec[n]=(1+mini);
    else
    vec[n]=mini;
    return vec[n];
}

int fun3(int tar,int nf,int dice,vector<int> &vec){
    if(nf*dice<tar) return 0;
    if(dice>tar || dice<=0) return 0;
    if(dice==tar || dice==1) return 1;
    if(vec[tar]!=-1) return vec[tar];
    int mini=0;
    int t=nf;

    while(t>0){
        if(t<=tar)
            mini=(mini%mod+fun3(tar-t,nf,dice-1,vec)%mod)%mod;
        t--;
    }

    
    return vec[tar]=mini;
}







int main(){
    int tar=6;
    int di=4;
    int k=6;
    vector<int> vec(tar+1,-1);
    cout<<fun3(tar,k,di,vec);
}
