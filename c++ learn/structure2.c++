// putting function also in structure

#include<iostream>
#include<conio.h>

using namespace std;

struct student{

    char name[100];
    int std_id;
    float std_marks;

    void input(){

        cout<<"enter name,std_id,std_marks";
        cin>>name>>std_id>>std_marks;
    };

    void display(){

        cout<<name<<" "<<std_id<<" "<<std_marks;

    };
};

    int main(){

        student b1;

        b1.input();
        b1.display();
    }





