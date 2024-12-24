#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include <string>
#include<unordered_map>
#include<cmath>
#include<queue>
using namespace std;


int main(){
    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<char('a'+i+j)<<" ";
        }
        cout<<endl;
    }
}