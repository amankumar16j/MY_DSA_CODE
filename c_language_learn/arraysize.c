//to calculate  size of array and no. of elements in array.
#include<stdio.h>

int main (){

    int arr[5]={2,3,6,8,1};
    int size=sizeof(arr);
    int nosize= sizeof(arr[0]);
    printf("size of one element =%d\n",nosize);
    printf("size of the array = %d\n", size);
    printf("total no. of element are :%d", size/nosize);
}