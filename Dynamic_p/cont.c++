#include<iostream>
#include<vector>
using namespace std;

int main(){
    int i=0;
    int n=5;
    while(i<n){
        
        if(i==3){
            i++;
            continue;
        } 
        cout<<i<<endl;

        i++;
    }
}