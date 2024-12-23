// creating an array dynamically

#include<iostream>
#include<conio.h>

using namespace std;

int main (){

    int *ptr;
    int n;
    cout<<"enter the no. of element to enter: ";
    cin>>n;
    ptr=new int[n];

    for(int i=0;i<n;i++){

        cin>>*(ptr+i);
    }

    for(int i=0;i<n;i++){
        cout<<ptr[i]<<"\n";
    }

    delete []ptr;
    ptr=NULL;
}