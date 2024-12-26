#include<iostream>
#include<vector>
#include<queue>
#define d double
using namespace std;

class cmp{
    public:
    bool operator()(int a,int b){
        return a>b;
    }
};

int main(){
    priority_queue<int,vector<int>,cmp> pq;
    pq.push(1);
    pq.push(91);
    pq.push(-1);
    pq.push(31);
    pq.push(11);
    pq.push(21);

    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    
}