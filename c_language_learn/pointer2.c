#include<stdio.h>

void _square(int *n){
*n=(*n)*(*n);
printf("square = %d\n", *n);
}

void square(int n){
    n=n*n;
    printf("square = %d\n", n);
}


int main (){

    int num=5;
    //call by reference
    _square(&num);
    printf("number = %d\n",num);
    
    printf("\n");
   
    //call by value
    square(num);
    printf("number = %d\n",num);
}