#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=10;
    int m=5;
    vector<int> v1(m,n);
    vector<int> v2(5,-1);

    

    v1.insert(v1.end(),v2.begin(),v2.end());
    for(int i=0;i<v1.size();i++){
        cout<<v1.at(i)<<" ";
    }
}