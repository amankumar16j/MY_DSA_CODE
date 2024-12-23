#include<stdio.h>
int main () {
    int n,sum=0;
    printf("enter the no. :");
    scanf("%d", &n);

    for( int i=0;i<=n;i++){ 
        sum = sum +i ;
    }
    printf("sum is : %d", sum);
}