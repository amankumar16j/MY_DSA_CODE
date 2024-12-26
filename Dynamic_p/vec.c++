#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> vec(3,vector<int>(7,0));

    cout<<vec.size()<<" "<<vec[0].size();

    // for(auto i:vec){
    //     for(auto j:i){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
}