#include<stdio.h>

void print(char *n){

    while (*n!='\0'){
        printf("%c",*n);
        n++;
    }
    printf("\n");

}


int main(){

    char name[20]="aman kumar";
    print(name);


}