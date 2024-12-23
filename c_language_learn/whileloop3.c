//sum of first n natural no.
#include<stdio.h>
int main () {
    int n;

    printf("enter the no.");
    scanf("%d", &n);

    int i=1,sum=0;
    while(i<=n){

    sum=sum+i;
    i++;
   } 
   printf("%d", sum);
       
    }