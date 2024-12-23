#include<iostream>
using namespace std;
void swap(int* a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int a[],int L,int H){
    int pivot=a[L];
    int i=L+1;
    int j=H;
    while(true){
        while(a[i]<=pivot && i<=j) i++;
        while(a[j]>pivot && i<=j) j--;
        if(i<=j) swap(&a[j],&a[i]);
        else break;
    }
    swap(&a[j],&a[L]);
    return j;
}
void QuickSort(int a[],int L,int H){
    if(L<H){
        int p=partition(a,L,H);
        QuickSort(a,L,p-1);
        QuickSort(a,p+1,H);
    }
}
int main(){
    int arr[]={50,70,60,90,40,80,10,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    QuickSort(arr,0,size-1);
    cout<<"Array after sorting: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}