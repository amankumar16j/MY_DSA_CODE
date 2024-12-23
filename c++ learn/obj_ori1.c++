//calculating area and perimeter using object oriented programming

#include<iostream>
#include<conio.h>

using namespace std;

class rectangle{

private:
    int length;
    int breadth;
    
public:
    rectangle(int l,int b){                // it is also called constructor
        length=l;
        breadth=b;
    };

    void area(){                             
    cout<<"area="<<length*breadth<<"\n";
    };

    void perimeter(){
    cout<<"perimete="<<2*(length+breadth)<<"\n";

    };
};

int main(){

    
    int l=0,b=0;

    printf("enter the value of length and breadth:");
    cin>>l>>b;

    rectangle r1(l,b);
    r1.area();//call by value
    r1.perimeter();//call by reference

}