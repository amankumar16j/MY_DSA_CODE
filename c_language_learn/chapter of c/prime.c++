#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int flag=0;


    cout<<1;
    for(int i=2;i<=n;i++){
        for(int j=2;j<=i-1;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag!=1)
        cout<<i;
        flag=0;
    }
}