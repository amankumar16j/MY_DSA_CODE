#include<stdio.h>



int main() {
    
    int n,sum=0;
    printf("enter n: \n")
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("enter value of arr\n")
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    
     
    return 0;
}
