#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool cmp(vector<int> a, vector<int> b){
    return a[0]>b[0];
}

int main(){

    vector<vector<int>> v1={{1,3},{2,6},{5,7},{8,10},{15,18}};
    //vector<vector<int>> v1={{1,4},{4,5}};
    priority_queue<int,vector<vector<int>>,decltype(&cmp)> pq(cmp);
    vector<vector<int>> fina;

    for(auto i:v1){
        pq.push(i);
    }

   while(!pq.empty()){
        cout<<pq.top()[0]<<" "<<pq.top()[1];
        pq.pop();
        cout<<endl;
   }

  // cout<<pq.size();

    // int i=0;
    // vector<int> first;
    // vector<int> second;
    // vector<int> ans;
    // while(i<1){

    //     first=pq.top();
    //     pq.pop();

    //     if(first[1]>=pq.top()[0]){
    //         second=pq.top();
    //         pq.pop();
    //         ans.push_back(first[0]);
    //         ans.push_back(second[1]);
    //         pq.push(ans);
    //         ans.clear();
    //     }
    //     else{
    //         fina.push_back(first);
    //     }
    //     i++;
    // }

    // if(!pq.empty()){
    //     fina.push_back(pq.top());
    // }

    // // for(auto i: fina){
    // //     for(auto j: i){
    // //         cout<<j<<" ";
    // //     }
    // //     cout<<endl;
    // // }

    // cout<<v1.size();


}