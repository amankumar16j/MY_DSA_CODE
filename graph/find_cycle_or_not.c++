#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<vector<int>> vec(5);
    vec[1].push_back(3);
    vec[3].push_back(1);
    vec[2].push_back(2);

    for(auto i:vec){
        for(int j=0;j<i.size();j++){
            cout<<i[j];
        }
        cout<<endl;
    }

}