#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int findMaxFruits(vector<int> &arr, int n) {
    unordered_map<int,int> map;
    int i=0;
    int j=0;
    int maxi;
    int maxlen=-10;
    while(j<n){
        map[j]++;
        while(map.size()>2 && i<n){
            map[i]--;
            if(map[i]==0){
                map.erase(map[i]);
            }
            i++;
        }
        maxi=j-i+1;
        maxlen=max(maxlen,maxi);

        j++;
    }
    return maxlen;
}

int main(){

    vector<int> v={1,1,2,3};
    int ans=findMaxFruits(v,4);
    cout<<ans;




}