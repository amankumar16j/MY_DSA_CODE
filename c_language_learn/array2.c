//using array in function


#include<stdio.h>

void prino(int arr[],int n){

    for(int i =0;i<6;i++){
    printf("%d\t",arr[i]);}

}

int main(){

    int arr[]={3,4,5,6,2,6};
    prino(arr,6);

}