#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<unordered_map>

using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second>b.second;
}
int main(){
    int ts=4;
    int count=0;
    //vector<vector<int>> v1[[1,3],[5,5],[2,5],[4,2],[4,1],[3,1],[2,2],[1,3],[2,5],[3,2]];
    vector<vector<int>> v1= {{5,10},{2,5},{4,7},{3,9}};
    vector<pair<int,int>> um;

    for(auto i:v1){
        um.push_back({i[0],i[1]});  
    }


    sort(um.begin(),um.end(),cmp);
    //int j=0;
    // for(auto i: um){
    //     cout<<um[j].first<<" "<<um[j].second;
    //     cout<<endl;
    //     j++;
    // }

    int i=0;
    while(ts){
        while(um[i].first>0 && ts>0){
            count+=um[i].second;
            ts--;
            um[i].first--;
        }
       
        i++;
        
        
    }

    cout<<count;

  
    
}