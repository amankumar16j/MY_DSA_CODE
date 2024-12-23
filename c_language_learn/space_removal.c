//removing space from string

#include<stdio.h>
#include<string.h>

int main(){

    char str[100]="a ma n kum a r";
    char copy[100];
    int l=strlen(str);
    int j=0;

    for(int i=0;i<=l;i++){
        if(str[i]=='a' || str[i]==' '){
            continue;
        }
        copy[j]=str[i];
        j++;
    }
    printf("%s",copy);
   
    
}