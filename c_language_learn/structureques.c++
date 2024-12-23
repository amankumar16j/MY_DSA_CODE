/*Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10).
 Store the information of the students.
1 - Write a function to print the names of all the students having age 14.
2 - Write another function to print the names of all the students having even roll no.
3 - Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).*/

#include<iostream>
#include<conio.h>

using namespace std;

struct student{

    int roll_no;
    char name[50];
    int age;
    char address[100];

};

void name_age_14(student c[100], int ns){

    
    cout<<"name of the student with age 14 is:\n";
    for(int i=0;i<ns;i++){
        
        if(c[i].age==14){
            cout<<c[i].name;
            cout<<"\n";
        }
    }

};

void  name_even_roll(student c[100],int ns){

    cout<<"names of student having even roll no.:\n";
    for(int i=0;i<ns;i++){
        
        if((c[i].roll_no)%2==0){
            cout<<c[i].name;
            cout<<"\n";
        }
    }
};


int main(){

    student c[100];
    int ns;

    cout<<"enter the no. of student:";
    cin>>ns;

    for(int i=0;i<ns;i++){
        cout<<"enter roll_no.:";
        cin>>c[i].roll_no;

        cout<<"enter name:";
        cin>>c[i].name;

        cout<<"enter age:";
        cin>>c[i].age;

        cout<<"enter address:";
        cin>>c[i].address;

        cout<<"\n";

    }

   name_age_14(c,ns);
   name_even_roll(c,ns);
}