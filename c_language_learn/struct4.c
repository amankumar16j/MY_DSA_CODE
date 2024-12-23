// structure using pointer 

#include<stdio.h>
#include<string.h>

struct student{
    char name[50];
    int roll;
    float cgpa;
    
};
int main (){
    struct student s1 = {"aman kumar",1221,9.2};
    printf("%d\n",s1.roll);

    struct student *ptr;
    ptr=&s1;
    printf("%d\n",(*ptr).roll);
    printf("%d\n",ptr->roll);
    printf("%s\n",ptr->name);
    printf("%f\n",ptr->cgpa);

}