#include<stdio.h>
int main() {
    int a;
    printf("enter no. of times to print :");
    scanf("%d", &a);

    int i=1;

    while(i<=a){

        printf("%d \n", i);

        i++;
    }
}