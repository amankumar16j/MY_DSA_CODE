// to find minimum and maximum no. in an array


#include<stdio.h>
#define n 5
int main(){
    int arr[n];
printf("enter the value in array:\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}


int min,max;
    
    min=arr[0];
    max=arr[0];

    for(int i=1;i<n;i++){

        if (arr[i]<min){
            min=arr[i];
        }
        else if (arr[i]>max){
            max=arr[i];
        }
    }
    printf("min no. = %d",min);
    printf("max no. =%d",max);
}