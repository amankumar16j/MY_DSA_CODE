#include<iostream>
#include<vector>
using namespace std;

void heapify(vector<int> &v1,int i){
    int parent=(i-1)/2;

    if(parent>=0){
        if(v1.at(parent)<v1.at(i)){
            swap(v1.at(parent),v1.at(i));
            heapify(v1,parent);
        }
    }
}

void delete_heapify(vector<int> &v1,int i,int n){
    int large=i;
    int lc=2*i+1;
    int rc=2*i+2;

    if(lc<n && v1.at(lc)>v1.at(large)){
        large=lc;
    }
    if(rc<n && v1.at(rc)>v1.at(large)){
        large=rc;
    }

    if(large!=i){
        swap(v1.at(large),v1.at(i));
        delete_heapify(v1,large,n);
    }
}

void deletion(vector<int> &v1,int n){
    int dele=v1.at(0);
    v1.at(0)=v1.at(n);
    v1.pop_back();
    delete_heapify(v1,0,v1.size()-1);

    cout<<"deleted item is: "<<dele<<endl;
}


void insert(vector<int> &v1,int k){
    v1.push_back(k);
    heapify(v1,v1.size()-1);
}

void display(vector<int> v1){
    for(int i=0;i<v1.size();i++){
        cout<<v1.at(i)<<" ";
    }
}


int main(){
    vector<int> v1;
    int n,ele;
    cout<<"enter the no. of element to enter";
    cin>>n;

    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>ele;
        insert(v1,ele);
    }

    display(v1);

    deletion(v1,v1.size()-1);
    deletion(v1,v1.size()-1);
    deletion(v1,v1.size()-1);

    
}