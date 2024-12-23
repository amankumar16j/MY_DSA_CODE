#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int l,int mid,int h){
    int i=l;
    int j=mid+1;
    int k=l;
    vector<int> da(h+1);
    while(i<=mid && j<=h){
        if(arr[i]<arr[j]) da[k++]=arr[i++];
        else da[k++]=arr[j++];
    }
    while(i<=mid) da[k++]=arr[i++];
    while(j<=h) da[k++]=arr[j++];

    for(int k=l;k<=h;k++){
        arr[k]=da[k];
    }
}

void mergesort(vector<int> &arr,int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}


int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    mergesort(vec,0,vec.size()-1);
    for(auto i:vec){
        cout<<i<<" ";
    }

}