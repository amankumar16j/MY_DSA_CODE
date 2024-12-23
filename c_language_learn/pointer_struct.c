// pointer to structure

#include<stdio.h>
#include<stdlib.h>


struct rectangle{
    int length;
    int breadth;
};

int main(){

    struct rectangle r1={20,25};

    struct rectangle *p=&r1;

    printf("length=%d",p->breadth);

}