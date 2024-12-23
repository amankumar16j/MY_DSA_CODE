#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,map<int,int>> mp;

    mp[1][31]=2;

    cout<<mp[1].count(31);

    


}
