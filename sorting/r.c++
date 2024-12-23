#include<iostream>
using namespace std;
void swa(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){

    int a=5;
    int b=10;
    swa(a,b);
    cout<<a<<" "<<b;
}