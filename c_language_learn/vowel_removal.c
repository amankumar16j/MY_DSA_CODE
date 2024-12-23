// removing vowel from string

#include<stdio.h>
#include<string.h>

int main(){

    static char str[100];
    static char str2[100];
    int i,j=0;
    printf("enter the string: ");
    gets(str);
    int l;
    l=strlen(str);

    for(i=0;i<=l;i++){
        if(i>=l-4 || l==3 && str[l-4]==' ' && str[l-3]=='t' && str[l-2]=='h' && str[l-1]=='e'){
        continue;}
        if(str[i]=='t' && str[i+1]=='h' && str[i+2]=='e' && str[i+3]==' '){
            i+=2;
            continue;
        }
        else{
            str2[j]=str[i];
            j++;
        }
    }
    printf("%s",str2);






}