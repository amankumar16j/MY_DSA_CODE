// returning pointer
// finding mid value 

#include<stdio.h>

int *midv(int arr[],int n){
    return &arr[n/2];
}

int main(){

    int arr[]={12,43,65,76,34,2,3,5,6,7};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    int *mid= midv(arr,n);
    printf("%d", *mid);
}