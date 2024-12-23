// passsing structure as parameter in a function by call by reference and call by value.

#include<stdio.h>

struct rectangle{
    int length;
    int breadth;
};

void area(struct rectangle r){
    printf("area=%d\n",r.length*r.breadth);
};
void perimeter(struct rectangle *ptr){

    printf("perimeter=%d\n",2*(ptr->lengt+ptr->breadth));

};



int main(){

    struct rectangle r1;

    printf("enter the value of length and breadth:");
    scanf("%d %d",&r1.length,&r1.breadth);

    area(r1);//call by value

    perimeter(&r1);//call by reference


}