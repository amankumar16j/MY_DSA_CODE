#include<stdio.h>
#include<string.h>

void salting(char password[],char salt[] ){
    printf("company password is : %s",strcat(password,salt));
}

int main(){
    char password[100]="aman1234@";
    char salt[3]="zip";

    salting(password,salt);
}