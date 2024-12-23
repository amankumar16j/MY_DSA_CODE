// array of structure 


#include<stdio.h>
#include<string.h>

struct student{
    char name[50];
    int roll;
    float cgpa;
    
};
int main (){

    struct student ece[100];
    strcpy(ece[0].name,"aman kumar");
    ece[0].roll=1;
    ece[0].cgpa=9.2;

    printf("%d\n",ece[0].roll);
    printf("%f\n",ece[0].cgpa);
    printf("%s\n",ece[0].name);

    
    strcpy(ece[1].name,"sameer kumar");
    ece[1].roll=2;
    ece[1].cgpa=8.2;

    printf("%d\n",ece[1].roll);
    printf("%f\n",ece[1].cgpa);
    printf("%s\n",ece[1].name);

    strcpy(ece[2].name,"purusarth kumar");
    ece[2].roll=3;
    ece[2].cgpa=8.4;

    printf("%d\n",ece[2].roll);
    printf("%f\n",ece[2].cgpa);
    printf("%s\n",ece[2].name);
}