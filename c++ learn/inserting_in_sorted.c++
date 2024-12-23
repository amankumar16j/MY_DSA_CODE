// inserting an element in sorted array

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int arr[20]={1,4,6,7,9,23,32,45,90,100};
    int key=21;
    int length=10;
    
    int i=length-1;

    while(arr[i]>key){
        arr[i+1]=arr[i];
        i--;
    }

    arr[i+1]=key;
    length++;

    for(int j=0;j<length;j++){
        cout<<arr[j]<<"\t";
    }

   

}