#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    unordered_set<int> s;
    //insertion

    s.insert(1);
    s.insert(62);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);

    // for(int i: s){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<s.size();
    // s.erase(2);

     if(s.find(4)!=s.end()){
        cout<<"target exist"<<endl;
     }
     else{
        cout<<"target does not exist"<<endl;
     }


}