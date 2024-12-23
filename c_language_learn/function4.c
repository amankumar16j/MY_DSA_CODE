// use function to print table
#include<stdio.h>


void tab(){
 int n;   
 printf("enter any no.");
 scanf("%d", &n);

 for( int i=1;i<=20;i++){
    printf("%d", n);
    printf("X");
    printf("%d", i);
    printf("=");
    printf("%d \n",n*i);
 }
}


int main() {
tab();}
  

  

  

