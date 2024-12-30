#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ws=4;
    int i=0;
    int j=ws-1;
    int sum=0;
    for(int k=0;k<ws;k++){
        sum+=arr[k];
    }
    int max=sum;

    while(j<n){
        j++;
        i++;
        sum=sum-arr[i-1]+arr[j];
        if(max<sum){
            max=sum;
        }

    }

    cout<<max;

}