// to show that size of pointer of all data type are equal

#include<stdio.h>

int main(){

    int a=10;
    char b='b';
    float c=7.5;

    char *cptr=&b;
    int *ptr=&a;
    float *fptr=&c;

    printf("size of char ptr: %d\n",sizeof(cptr));
    printf("size of float ptr: %d\n",sizeof(fptr));
    printf("size of int ptr: %d\n",sizeof(ptr));


}