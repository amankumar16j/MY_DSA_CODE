// to find single missing element in the array
//there will be a sorted array with one single element missing

#include<iostream>
#include<conio.h>

using namespace std;


int main(){

    int a[10]={1,2,3,4,6,7,8,9,10,11};
    int diff=a[0]-0;

    for(int i=0;i<10;i++){

        if(a[i]-i!=diff){
            cout<<"missing element found which is:"<<i+diff;
            
            break;
        }
    }


}