// swaping the no using call by reference and value

#include<stdio.h>

void swap(int a, int b){

    int t=a;
    a=b;
    b=t;

    printf("a = %d & b= %d\n", a,b);
}

void _swap(int *a, int *b){

    int t=*a;
    *a=*b;
    *b=t;

    printf("a = %d & b= %d\n", *a,*b);
}


int main (){

    int a=5;
    int b=3;
// call by value
    swap(a,b);
    printf("a = %d & b= %d\n", a,b);


// call by reference
    _swap(&a,&b);
    printf("a = %d & b= %d\n", a,b);
}