#include<iostream>
using namespace std;

int main(){
    // int data;
    // cin>>data;
    // int *temp;
    // temp=&data;
    // cout<<*temp;

    int x=0;
    int y=1;
    int z=0;


    for(int i=0;i<=9;i++){
        x=y;
        y=z;
        z=x+y;
    }
    cout<<z;
}

