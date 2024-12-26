#include<iostream>
using namespace std;

int change(int *a1,int *b1){  
    *a1=5;
    *b1=7;
    return *a1+*b1;
}

int main(){
    int a=2;
    int b=2;
    int *x=&a;
    int *y=&b;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<change(x,y)<<endl;
    // cout<<change()
    cout<<a<<endl;
    cout<<b<<endl;
}

// int change2(int a,int b){
    
//     a=5;
//     b=7;

//     return a+b;
// }