#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the limit of range: ";
    cin>>n;
    int flag=0;

    cout<<1<<" ";    
    cout<<2<<" ";    

    for(int i=3;i<=n;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag!=1){
            cout<<i<<" ";
        }
        flag=0;
    }
}