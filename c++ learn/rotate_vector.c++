#include<iostream>
#include<vector>
using namespace std;

void rotate(int s,int r){
    vector<int> v1;
    int ele;

    cout<<"enter the elements of array: "<<endl;

    for(int i=0;i<s;i++){
        cin>>ele;
        v1.push_back(ele);
    }
    for(int i=0;i<r;i++){
        v1.insert(v1.begin(),v1.back());
        v1.pop_back();
    }

    for(int i=0;i<v1.size();i++){
        cout<<v1.at(i)<<" ";
    }
}


int main(){
    int n,size,rot;
    cin>>n;

    cout<<"enter the size of array and no. of times to rotate: "<<endl;
    for(int i=0;i<n;i++){
        cin>>size>>rot;
        rotate(size,rot);
    }
}
