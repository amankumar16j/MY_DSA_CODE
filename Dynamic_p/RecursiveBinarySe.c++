#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,3,6,8,9,12,24,46,67,89};
    int k;
    cin>>k;
    int l=0;
    int h=vec.size()-1;
    int index=-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(vec[mid]==k){
            index=mid;
            break;
        }
        else if(vec[mid]>k){
            h=mid-1;
        }
        else{
            l=mid+1;
        } 
    }
    if(index==-1){
        cout<<"element not found"<<endl;
    }
    else{
        cout<<"element found at index: "<<index<<endl;
    }
}
// int RecursiveBinarySearch(vector<int>arr,int k,int l,int h){
//     if(l>h){ 
//         return -1;
//     }
//     int mid=(l+h)/2;
//     if(arr[mid]==k){
//         return mid;
//     }
//     else if(arr[mid]>k){
//         return RecursiveBinarySearch(arr,k,l,mid-1);
//     }
//     else{
//         return RecursiveBinarySearch(arr,k,mid+1,h);
//     } 
// }
// int main(){
//     vector<int> vec={1,3,6,8,9,12,24,46,67,89};
//     cout<<RecursiveBinarySearch(vec,24,0,vec.size()-1);

// }
