#include<bits/stdc++.h>
using namespace std;

bool valid(vector<int> p,int mid,int k){
    unordered_set<int> s;
    int n=p.size();
    for(int i=0;i<n;i++){
        if(upper_bound(p.begin(),p.end(),mid+p[i]-1)!=p.end()){
            s.insert(i);
            s.insert(int(upper_bound(p.begin(),p.end(),mid+p[i]-1)-p.begin()));
        }
        if(s.size()>=k) return true;
    }
    return false;

}

int main(){

    vector<int> vec={13,5,1,8,21,2};
    sort(vec.begin(),vec.end());
    cout<<valid(vec,19,3);
}