// to calculate no. of vowel in a string.

#include<stdio.h>

void countv(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){

        if(arr[i]=='a' || arr[i]=='e' ||arr[i]=='i' || arr[i]=='o' || arr[i]=='u'){
            count++;
    }
}
printf("vovel = %d",count);
}

int main(){
char arr[50];
printf("enter the string :");
gets(arr);
puts(arr);
countv(arr);
}