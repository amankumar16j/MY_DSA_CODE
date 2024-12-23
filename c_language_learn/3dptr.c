#include<stdio.h>

int main (){
    int b[2][2][3]={
        {{2,5,7},{98,74,42}},
        {{54,23,75},{45,87,92}}
        };

    int (*ptr)[2][3]=b;
    printf("%d %d %d\n",&b[0][0][0],ptr,b[0][0]);

    printf("%d %d\n",b[0][1][1],*(*(*ptr+1)+1)); //if we have to access 74
    printf("%d %d\n",&b[0][1][1],*(*ptr+1)+1);//if we want find the address of 74 using pointers
    printf("%d %d",b[1][1][2],(*(*(*(ptr+1)+1)+2)));
}