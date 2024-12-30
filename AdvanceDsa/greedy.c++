#include<iostream>
#include<queue>
using namespace std;

int main(){

    vector<int> v1={1,4,-6,7,4,-9};
    priority_queue<int,vector<int>,greater<int>> pq(v1.begin(),v1.end());
    for(int i=0;i<v1.size();i++){
        pq.push(v1[i]);
    };
    pq.push(-100);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
