#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> ans;
vector<int> cre;
void createall(vector<int> vec,int i){


    if(i==vec.size()){
        ans.push_back(cre);
        return;
    }
    
    cre.push_back(vec[i]);
    createall(vec,i+1);
    cre.pop_back();
    createall(vec,i+1);
    
}



int main(){

    vector<int> vec={1,4,6,8};
    createall(vec,0);
    for(int i=0;i<ans.size();i++){
        for(auto j:ans[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<ans.size();
}