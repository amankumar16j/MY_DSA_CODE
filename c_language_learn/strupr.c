//   [strupr()]  used to convert upper to lower case
//   [strlwr()]  used to convert upper to lower case

#include<stdio.h>
#include<string.h>

int main(){

    char str[10]="RTHngh";

    printf("%s\n",strlwr(str));
    printf("%s\n",strupr(str));

}