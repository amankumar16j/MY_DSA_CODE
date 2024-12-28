#include<iostream>
using namespace std;

void bubble(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

/*void insertion(int arr[],int n){
    int temp;
    int j=0;
    int i=1;
    while(i<n){
        temp=arr[i];

        i++;
    }


}*/

void selection(int arr[],int n){
    int min=0,temp;
    for(int i=0;i<n;i++){
        min=i;
        for(int j=i;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}

int main(){
    int arr[]{10,5,7,6,91,1,469,55};
    int n=sizeof(arr)/sizeof(arr[0]);
    // bubble(arr,n);
    selection(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}