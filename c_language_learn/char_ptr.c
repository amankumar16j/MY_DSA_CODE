#include<stdio.h>

int main(){
    char ch[]="aman kumar";
    printf("%s\n",ch);
    printf("%d\n",ch);

    char*ptr;
    ptr=ch;
    printf("%s\n",ptr);
    printf("%d\n",ptr);
    printf("%c\n",ptr[0]);
    
    ptr[0]='n';
    printf("%s",ch);
}