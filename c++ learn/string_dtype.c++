#include<iostream>

using namespace std;

int main(){
    // string s="aman kumar is a good boy";//initializing at declaration
    // cout<<s;

    // cout<<endl;

    // string s1("aman kumar");//another way of
    // cout<<s1;

    // cout<<endl;

    //now taking user input

    // string s2;// using this method only one word will be printed
    // cin>>s2;
    // cout<<s2<<endl;

    // string s3;//to end writing we have to hit ctrl-z
    // while(cin>>s3){
    //     cout<<s3<<endl;
    // }

    //best way to take input
    //for this also we have to hit ctrl-z

    string s4;
    while(getline(cin,s4)){
        cout<<s4<<endl;
    }


}