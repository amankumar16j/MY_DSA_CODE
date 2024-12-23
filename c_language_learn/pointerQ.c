// to find min and max value using pointers

#include<stdio.h>

void minmax(int arr[],int *min,int *max){
    *min=*max=arr[0];
    for( int i =1;i<9;i++){
        if(arr[i]<*min){
            *min=arr[i];
        }
        if(arr[i]>*max){
            *max=arr[i];
        }
    }
}

int main(){
    int arr[]={12,34,56,87,443,2,3,4,1};
    int min,max;

    minmax(arr,&min,&max);
    printf("min=%d \t max=%d",min,max);
}