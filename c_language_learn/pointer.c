#include<stdio.h>
int main(){

    int age=22;
    int *ptr=&age;
    int **pptr=&ptr;

    
    printf("value of age =%d\n",*ptr);
    printf("value of age =%d\n",age);
    printf("value of age =%d\n",*(&age));


    printf("address of age=%u\n",ptr);
    printf("address of age=%u\n",&age);
    
    printf("address  of ptr =%u\n",&ptr);

    printf("value of age=%d\n",**pptr);
    printf("address of agr=%u\n",*pptr);

    printf("address of pprt=%u \n", &pptr);
    printf("address of ptr %u\n",pptr);




    
}