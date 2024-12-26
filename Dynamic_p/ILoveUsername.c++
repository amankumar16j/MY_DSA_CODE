// https://codeforces.com/problemset/problem/155/A


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>vec(n,0);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int l=vec[0];
    int h=vec[0];
    int count=0;
    for(int i=1;i<n;i++){
        if(vec[i]<l){
            count++;
            l=vec[i];
        }
        else if(vec[i]>h){
            count++;
            h=vec[i];
        }
    }

    cout<<count;
    
}