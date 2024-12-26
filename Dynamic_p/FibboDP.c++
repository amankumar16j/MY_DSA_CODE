#include<iostream>
#include<vector>

using namespace std;

int fibbo(int n,vector<int> &vec ){
    if(n==0){
        vec.at(0)=0;
        return 0;
    }
    if(n==1){
        vec.at(1)=1;
        return 1;
    }

    if(vec.at(n)!=-1){
        return vec.at(n);
    }

    int ans=fibbo(n-1,vec)+fibbo(n-2,vec);
    vec.at(n)=ans;
    return ans;
}


int main(){

    int n=10;
    vector<int> vec(n+1,-1);
    vec.at(0)=0;
    vec.at(1)=1;

    // for(int i=0;i<=n;i++)
        fibbo(n,vec);
    for(int i:vec){
        cout<<i<<" ";
    }


    
}