#include<stdio.h>

int main(){

    int ba[2][3]={{2,67,34},{45,87,23}};

    int (*ptr)[3]=ba;

    printf("%d %d\n",&ba[0],ptr);
    printf("%d %d\n",&ba[0][1],(*ptr+1));
    printf("%d %d\n",ba[0][1],*(*ptr+1));

    printf("%d",*((*(ptr+1))+1)); //if we want to access 87 using pointer

    }