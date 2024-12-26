// find problem at:- https://cses.fi/problemset/task/1634


#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,am;
    cin>>n>>am;
    vector<int>coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    int inf=10000000;
    vector<int> vec(am+1,inf);
    vec[0]=0;
    for(int i=1;i<=am;i++){
        int mini=inf;
        for(auto t:coins){
            if(t<=i){
                mini=min(mini,vec[i-t]);
            }
        }
        vec[i]=1+mini;
    }
    if(vec[am]>=inf){
        cout<<-1;
    }
    else{
        cout<< vec[am];
    }
}