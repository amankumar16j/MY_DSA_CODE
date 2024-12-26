#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int num;
	cin >> num;
	int m;
	cin>>m;
	vector<int> vec(num+1,0);
	vector<int>ans(1000001,0);
	for(int i=0;i<m;i++){
		int l,r;
		cin>>l>>r;
		for(int j=l;j<=r;j++){
			vec[j]++;
			ans[vec[j]]++;
		}
	}

	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int x;
		cin>>x;
		cout<<ans[x]<<endl;
	}
}