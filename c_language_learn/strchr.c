// [strchr()] is userd to know the first occurance of the character in string 

#include<stdio.h>
#include<string.h>

int main (){

    char str[100]="aman";

    int *chp=strchr(str,'a');

    printf("%d\n",&str[0]);

    if(chp){
        printf("%d\n",chp);//prints the address of the character found
        printf("found\n");
    }
    else{
        printf("%d\n",chp);//if not found returns zero
        printf("not found");
    }


    
}