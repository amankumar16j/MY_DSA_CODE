//finding address of an element in an array
#include<stdio.h>

int main(){

    char arr[]={'a','d','g','t','w','z','r','f'};

    char ch ='r';
    char ch2='z';
    for (int i=0;i<8;i++){
        if (arr[i]==ch){
            printf("object found which is:%c \n",arr[i]);
            printf("address of object is %p\n",&arr[i]);
            printf("index is:%d \n",i);
        }
        if (arr[i]==ch2){
            printf("object found which is:%c \n",arr[i]);
            printf("address of object is %p\n",&arr[i]);
            printf("index is:%d \n",i);
        }
    }
}