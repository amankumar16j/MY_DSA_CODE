#include<iostream>
#include<queue>
#include<vector>
using namespace std;


// ele *ptr1=new ele('a',5);
//     ele *ptr2=new ele('c',4);
//     ele *ptr3=new ele('d',7);
//     ele *ptr4=new ele('b',9);
//     vec.push_back(ptr1);
//     vec.push_back(ptr2);
//     vec.push_back(ptr3);
//     vec.push_back(ptr4);

bool cmp(int i,int j){
    return i>j; 
}
int main(){
    vector<int> vec={2,7,3,8,9};
    priority_queue<int,vector<int>,decltype(&cmp)> pq(cmp);
    for(int i:vec){
        pq.push(i);
    }

    while(pq.size()!=1){
        cout<<pq.top()<<" ";
        pq.pop();
    }

}