//implementing binary search.

#include<iostream>
#include<conio.h>

using namespace std;

void binary_search(int arr[],int key,int least,int max){

    int mid=(least+max)/2;

    cout<<"enter the value of key to find:";
    cin>>key;

    while(least<=max){

        mid=(least+max)/2;

        if(key==arr[mid]){
            cout<<"element found at index:"<<mid;
            break;
        }
        else{
            if(key>arr[mid]){
                least=mid+1;
            }
            else{
                max=mid-1;
            }
        }
    }
};







int main(){

    int arr[13]={1,23,45,67,89,345,678,876,877,890,900,2345,2346};

    int key;
    int least=0;
    int max=12;
    int mid;

    binary_search(arr,key,least,max);

}