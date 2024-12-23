#include<iostream>
using namespace std;
void merge(int A[],int l,int mid,int h){
    int i=l,j=mid+1,k=l;
    int d[h+1];
    while(i<=mid && j<=h){
        if(A[i]<A[j]){
            d[k++]=A[i++];
        }
        else{
            d[k++]=A[j++];
        }
    }
    while(i<=mid){
        d[k++]=A[i++];
    }
    while(j<=h){
        d[k++]=A[j++];
    }
    for(int i=l;i<=h;i++){
        A[i]=d[i];
    }
}
void RMergeSort(int A[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        RMergeSort(A,l,mid);
        RMergeSort(A,mid+1,h);
        merge(A,l,mid,h);
    }
}
int main() {
    int A[] = {1,2,3,6,7,9,5,4};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<"Original Array:";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    RMergeSort(A,0,n-1);
    cout<<endl;
    cout<<"Sorted Array:";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}