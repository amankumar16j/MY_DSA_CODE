#include<stdio.h>
#include<string.h>

struct student{

    char name[50];
    int roll;
    float CGPA;

};
int main(){
struct student s1 ;
strcpy(s1.name,"Aman");
s1.roll=1;
s1.CGPA=9.9;

printf("%d\n",s1.roll);
printf("%s\n",s1.name);
printf("%f\n",s1.CGPA);

struct student s2;
strcpy(s2.name,"purusarth");
s2.roll=2;
s2.CGPA=9;

printf("%d\n",s2.roll);
printf("%s\n",s2.name);
printf("%f\n",s2.CGPA);

struct student s3;
strcpy(s3.name,"sameer");
s3.roll=3;
s3.CGPA=8.9;

printf("%d\n",s3.roll);
printf("%s\n",s3.name);
printf("%f\n",s3.CGPA);




}