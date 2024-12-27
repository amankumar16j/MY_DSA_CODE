#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(vector<int>a,vector<int>b){
    return a[0]<b[0];
}

int main(){

     vector<vector<int>> v1={{-52,31},{-73,-26},{82,97},{-65,-11},{-62,-49},{5,99},{58,95},{-31,49},{66,98},{-63,2},{30,47},{-40,-26}};
     sort(v1.begin(),v1.end(),cmp);

    for(auto i: v1){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
// 




}