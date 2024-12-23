// to understand the function of strcmp and its type.
#include<stdio.h>
#include<string.h>


void compare(char newname[],char cmp[]){
    printf("new name is :%d\n",strcmp(newname,cmp));
    printf("new name is :%d\n",strcmpi(newname,cmp));
    printf("new name is :%d\n",strnicmp(newname,cmp,5));
    printf("new name is :%d\n",strncmp(newname,cmp,5));
}

int main(){
    char name[]="AmanKumar";
    char cmp[]="amanKumar";
    char newname[]="amankumar";

    compare(newname,cmp);

    
}