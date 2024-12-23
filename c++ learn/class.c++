#include<iostream>
using namespace std;


class A{
    public:

        // A(){
        //     cout<<"A ka const"<<endl;
        // }

        virtual void display(){
            cout<<"base class"<<endl;
        }

        // virtual ~A(){
        //     cout<<"base ka dist"<<endl;
        // }
};

class B :public A{

    public:
        // B(){
        //     cout<<"b ka const"<<endl;
        // }
        void dispaly(){
            cout<<"derived class"<<endl;
        }

        // ~B() override{
        //     cout<<"derived ka dist"<<endl;
        // }

};


int main(){
    B obj1;
    A* ref=&obj1;
    ref->display();

    // A *obj=new B;
    // B *point=static_cast<B*> (obj);
    // point->dispaly();
    // delete obj;



}