// array of structure in one-go

#include<stdio.h>
#include<string.h>

struct student{
    char name[50];
    int roll;
    float cgpa;
    
};
int main (){
    struct student s1 = {"aman kumar",1221,9.2};
    printf("%d",s1.roll);

}