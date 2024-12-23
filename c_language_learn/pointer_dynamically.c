// pointer pointing structure dynamically.

#include<stdio.h>
#include<stdlib.h>


struct rectangle{
    int length;
    int breadth;
};
int main(){

    struct rectangle *ptr;

    ptr=(struct rectangle*)malloc(sizeof(struct rectangle));

    ptr->length=10;
    ptr->breadth=20;

    printf("length=%d",ptr->length);  
    
}