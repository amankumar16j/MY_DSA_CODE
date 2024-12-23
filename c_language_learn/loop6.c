//print n no. in reverse order and get its sum
#include<stdio.h>
int main () {
    int n,sum=0;
    printf("enter the no. :");
    scanf("%d", &n);

    for( int i=n;i>=0;i--){ 
        sum = sum +i ;
        printf("%d \n",i);
    }
    printf("sum is : %d", sum);
    
}