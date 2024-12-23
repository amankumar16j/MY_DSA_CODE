//an sorted array will be given with more than one missing elements
// to find missing elements

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int a[10]={1,2,3,4,5,8,11,12,13,14};

    int diff=a[0]-0;

    // METHOD 1
    for(int i=0;i<10;i++){
        if(a[i]-i!=diff){
            while(diff<a[i]-i){
                printf("missing element found which is:%d\n",i+diff);
                diff++;
            }
        }
    }

    //METHOD 2
    // it can be used to find the missing element even from unordered array, but need to know the greatest element in the array
    int b[10]={1,5,15,9,12,11,6,4,3,2};
    int arr[15]={0};

    int n;

    for(int i=0;i<10;i++){
        n=b[i];
        arr[n]++;
    }

    for(int i=0;i<15;i++){
        if(arr[i]==0){
            printf("missing element found which is:%d\n",i);
        }
    }



}