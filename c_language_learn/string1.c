// to find length of string

#include<stdio.h>
#include<string.h>
int main(){
int count=0;
char name[25];
printf("enter your name:");
gets(name);
puts(name);

//to trverse and count length of string

// for(int i=0 ;name[i]!='\0'; i++){
//     count++;
// }

// printf("length of string is :%d", count);

//to count length of string using inbuilt function

printf("%d",strlen(name));

}