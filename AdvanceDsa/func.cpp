#include<iostream>
using namespace std;

void findmax(){
    int choice=1;
    int a;
    int b;
    while(choice==1){
        cout<<"enter a:";
        cin>>a;
        cout<<"enter b:";
        cin>>b;

        cout<<"max value is: "<<max(a,b);
        cout<<endl;
        cout<<"if want to discontinue enter 0 else 1";
        cin>>choice;
    }

}

int main(){

    findmax();

}


