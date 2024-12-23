#include<iostream>

#include<conio.h>

using namespace std;

int main(){

    int a[20]={1,3,4,5,57,59,68,69,75,99};
    int alength=10;
    int b[20]={4,23,36,45,59,67};
    int blength=6;

    int arr[100];

    int i=0;
    int j=0;
    int k=0;

    while(i<alength && j<blength){

        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;
            i++;
        }
        
        else{
            arr[k]=b[j];
            k++;
            j++;
        }
   
    }

    for(;i<alength;i++){
        arr[k]=a[i];
        k++;
    }

    for(;j<blength;j++){
        arr[k]=b[j];
        k++;
    }

    for(int e=0;e<k;e++){
        cout<<arr[e]<<"\t";
    }


}