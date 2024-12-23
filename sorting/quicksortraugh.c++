#include<iostream>
#include<vector>
using namespace std;

void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int partition(vector<int> &arr,int l,int h){
    int i=l+1;
    int j=h;
    int pivot=arr[l];
    while(1){
        while(pivot>=arr[i] && i<=j) i++;
        while(pivot<arr[j] && j>=i) j--;
        if(i<j) swap(arr[i],arr[j]);
        else break;
    }
    swap(arr[j],arr[l]);
    return j;
}

void quicksort(vector<int> &arr,int l,int h){

    if(l<=h){
        int p=partition(arr,l,h);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,h);
    }

}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quicksort(arr,0,arr.size()-1);

    for(auto i:arr){
        cout<<i<<" "; 
    }

}