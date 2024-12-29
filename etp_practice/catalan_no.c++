#include<iostream>
using namespace std;


int main(){
    int n=5;
    int sum=0;
    int k=2;
    for(int i=2;i<n;i++){
        sum+=(n+k)/k;
    }
    cout<<sum;
}