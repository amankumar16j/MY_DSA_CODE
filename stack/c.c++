#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){

        int num,x,y;
        cin>>num>>x>>y;
        int len=0;

        vector<int> vec(num);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }

        int k=0;
        // while(x>0){
        //     x-=vec[k];
        //     k++;
        // }
        
        int j=0;
        while(k<num){
            // if(x>0){
                x-=vec[k];
            // }
            while(x<=0 && j<num){
                len=max(len,k-j);
                x+=vec[j];
                j++;   
            }
            k++;
        }

        cout<<len;

    }

}