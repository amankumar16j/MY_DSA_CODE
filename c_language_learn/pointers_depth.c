#include<stdio.h>

int main(){

    int a=10;
    int *ptr=&a;
    int **ptr1=&ptr;
    int ***ptr2=&ptr1;

    printf("%d\n",a);//10
    printf("%d\n",&a);//add
    printf("%d\n",ptr);//add
    printf("%d\n",*ptr);//10
    printf("%d\n",ptr1);//add2 of ptr
    printf("%d\n",*ptr1);//add
    printf("%d\n",**ptr1);//10
    printf("%d\n",ptr2);// add3 of ptr1
    printf("%d\n",*ptr2);//add2
    printf("%d\n",**ptr2);//add 
    printf("%d\n",***ptr2);//10

}