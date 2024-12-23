// creating a structure of student.

#include<iostream>
#include<conio.h>

using namespace std;

struct student{

    char name[100];
    int std_id;
    float std_marks;
};

void display(student);
student input();



int main() {

    student b1;

    b1=input();
    display(b1);

}

student input(){

    student b;
    cout<<"enter name student_id and student_marks: ";
    cin>>b.name>>b.std_id>>b.std_marks;
    return b;
};

void display(student b2){
    cout<<"name of the student is:"<<b2.name<<"\n"<<"student_id:"<<b2.std_id<<"\n"<<"student_marks:"<<b2.std_marks;
};

