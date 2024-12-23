//to check the no. is palidrome or not

#include<stdio.h>
#include<string.h>

int main (){
    char str[100],orig[100],rev[100];

    printf("enter the string to check:");
    gets(str);

    strcpy(orig,str);
    strrev(str);

    int val=strcmp(orig,str);

    if(val==0){
        printf("palidrome no.");
    }
    else{
        printf("not a palidrome no.");
    }

}