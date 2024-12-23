#include<iostream>
#include<sstream>
using namespace std;

int recur(string a,string b,int sa,int sb){
    static int num1=0,num2=0;
    if(sa>=0 || sb>=0)
        recur(a,b,sa-1,sb-1);
    if(sa>=0){
        num1=num1*10+(a[sa]-'0');
    }
    if(sb>=0){
        num2=num2*10+(b[sb]-'0');
    }

    return num1+num2;
}

int main(){
    string a="1234";
    string b="1234";



    stringstream ss;
    int res=recur(a,b,a.length()-1,b.length()-1);
    string s=to_string(res);
    cout<<s;

}