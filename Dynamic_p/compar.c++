#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Comp{
    public:

    bool operator()(vector<int> &v1,vector<int> &v2){

        int sum1=v1[0]+v1[1];
        int sum2=v2[0]+v2[1];

        if(sum1<sum2) return true;
        else if(sum1>sum2) return false;
        else v1[0]>v2[0];
    }
};


int main(){
    vector<vector<int>> vec;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        vec.push_back({x,y});
    }
    sort(vec.begin(),vec.end(),Comp());

    for(auto i:vec){
        cout<<i[0]<<" "<<i[1]<<endl;
    }
    
}