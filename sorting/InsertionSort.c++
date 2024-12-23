#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    for(int i=1;i<n;i++){
        int temp=vec[i];
        int j=i-1;
        while(j>=0 && vec[j]>temp){
            vec[j+1]=vec[j];
            j--;
        }
        vec[j+1]=temp;
    }

    for(auto i:vec){
        cout<<i<<" ";
    }
}