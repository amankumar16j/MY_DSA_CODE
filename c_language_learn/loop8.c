// print sum of no. between two no. including it

#include<stdio.h>
 int main () {
    int s,sum =0,e,t;
    
    
    printf("enter starting no. : ");
    scanf("%d", &s);

    printf("enter ending no. ");
    scanf("%d", &e);


     
    for( int i=s;i<=e;i++){

        sum= sum+i;
    }
    printf("sum of the no. = %d \n ",sum);
    
    
    
    }
    
    
    