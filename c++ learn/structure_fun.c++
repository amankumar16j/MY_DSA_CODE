// passsing structure as parameter in a function by call by reference and call by value.

#include<iostream>
#include<conio.h>

using namespace std;


struct rectangle{
    int length;
    int breadth;

    void area(){                             // This is a way we use in class just the difference is that instead of struct keyword there is class
    cout<<"area="<<length*breadth<<"\n";
    };

};


void perimeter(struct rectangle *ptr){
    cout<<"perimete="<<2*(ptr->length+ptr->breadth)<<"\n";

};



int main(){

    rectangle r1;

    printf("enter the value of length and breadth:");
    cin>>r1.length>>r1.breadth;

    r1.area();//call by value

    perimeter(&r1);//call by reference


}