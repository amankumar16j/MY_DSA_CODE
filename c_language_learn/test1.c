#include<stdio.h>

int main (){

    int sum=0,n,rem;
    
     printf("enter the no.");
     scanf("%d",&n);
     int temp=n;

     while(n>0){

        rem=n%10;

        sum=sum+(rem*rem*rem);

        n=n/10;

     }
     if(sum==temp){
        printf("it is a armstrong no.");
     }
     else{
        printf("it is not a armstrong no.");
     }
}