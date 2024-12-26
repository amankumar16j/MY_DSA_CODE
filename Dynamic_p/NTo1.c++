#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;




int main(){

    int n;
    n=100;
    int inf=INT_MAX;
    vector<int> vec(n+1,0);
    vec.at(0)=inf;
    vec.at(1)=0;
    vec.at(2)=1;
    vec.at(3)=1;

    for(int i=4;i<=n;i++){
        vec[i]=1+min(min(vec[i-1],((i%2==0)?vec[i/2]:inf)),((i%3==0)?vec[i/3]:inf));
    }
    cout<<vec[n];
}