#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int *arr1;

    arr1=new int[5];
    arr1[0]=10;arr1[1]=12;arr1[2]=15;arr1[3]=17;arr1[4]=1;

    int *arr2;

    arr2=new int[10];

    for(int i=0;i<5;i++){
        arr2[i]=arr1[i];
    }
    
    delete []arr1;

    arr1=arr2;
   
    arr2=NULL;

    for(int i=0;i<10;i++){
        cout<<arr1[i]<<"\n";
    }

    delete []arr1;

}