#include<iostream>
#include<vector>
using namespace std;

#define p pair<int,int> 
vector<vector<int>> vec={{0,1},{1,0},{-1,0},{0,-1}};
vector<vector<p>> parent;
vector<vector<int>>ran;

void ini(int n,int m){
	ran.resize(n,vector<int>(m,0));
	parent.resize(n,vector<p>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			parent[i][j]={i,j};
		}
	}
}

p findparent(int i,int j){
	if(parent[i][j]==p{i,j}) return {i,j};
	return parent[i][j]=findparent(parent[i][j].first,parent[i][j].second);
}

void drank(p u,p v){
	p up=findparent(u.first,u.second);
	p vp=findparent(v.first,v.second);

	if(up==vp) return;

	if(ran[up.first][up.second]==ran[vp.first][vp.second]){
		parent[vp.first][vp.second]=up;
		ran[up.first][up.second]++;
	}
	else if(ran[up.first][up.second]>ran[vp.first][vp.second]){
		parent[vp.first][vp.second]=up;
	}
	else{
		parent[up.first][up.second]=vp;
	}
}


vector<int> solut(int n, int m, vector<vector<int>> &q){
	vector<vector<int>>  grid(n,vector<int>(m,0));
	int t=q.size();
	ini(n,m);
	vector<int> an;
	int count=0;
	for(int i=0;i<t;i++){
		int x=q[i][0];
		int y=q[i][1];
		grid[x][y]=1;
		count++;
		for(auto f:vec){
			int a=x+f[0];
			int b=y+f[1];
			if(a>=0 && b>=0 && a<n && b<m && grid[a][b]!=0){
                drank({x,y},{a,b});
				count--;
			}
		}

		// for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){   
        //         if(grid[i][j]!=0 && findparent(i,j)==p{i,j})count++;
        //     }
        // }
		an.push_back(count);

	}
	return an;
}


int main(){
	vector<vector<int>> q={{0,0},{0,2},{2,2},{2,0},{1,0},{1,1},{1,2}};

	vector<int> an=solut(3,3,q);

	for(auto i:an){
		cout<<i<<" ";
	}

} 