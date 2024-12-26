/*
Move all values equal to K to the end of the Array
Input: arr = [2, 1, 2, 2, 2, 3, 4, 2], K = 2 
Output: [4, 1, 3, 2, 2, 2, 2, 2] 

*/


#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec={5,7,9,9,8,4,9,2,4,2,5,5,5,2,3,5,7,2,4,5,9,10,3,2,7,3,8,3,8,3};
    int k;
    cout<<"enter the key: ";
    cin>>k;
    int i=0;
    int j=1;
    int n=vec.size();

    while(j<n){

        if(vec[i]==k){
            while(vec[j]==k && j<n-1){
                j++;
            }
            int temp=vec[i];
            vec[i]=vec[j];
            vec[j]=temp;
        }
        i++;
        j++;
    }

    for(int t:vec){
        cout<<t<<" ";
    }


}