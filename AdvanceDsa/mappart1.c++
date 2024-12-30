#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    //insertion 

    pair<string,int> p1;
    p1.first="aman";
    p1.second=1;

    pair<string,int> p2;
    p2.first="ama";
    p2.second=2;
    pair<string,int> p3;
    p3.first="am";
    p3.second=3;


    unordered_map<string,int> map;
    map.insert(p1);
    map.insert(p2);
    map.insert(p3);

    map.erase("am");
    for(pair<string,int> p: map){
        cout<<p.first<<" "<<p.second<<endl;
    }
}