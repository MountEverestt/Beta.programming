#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long lnog
#define vec vector
#define umap unordered_map
using namespace std;
char a[31][31];
int vis[31][31];
queue<pair<int,int>>q;
int main(){
	int n, m;
	cin >> n >> m;
	for(int i=0; i<n ;i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(vis[i][j]) continue;
			if(a[i][j]=='#'){
				if(i-1>=0){
					if(a[i-1][j]=='.') vis[i-1][j]=true;
					a[i-1][j]='#';
				}
				if(j-1>=0){
					if(a[i][j-1]=='.') vis[i][j-1]=true;
					a[i][j-1]='#';
					
				}
				if(i+1<n){
					if(a[i+1][j]=='.') vis[i+1][j]=true;
					a[i+1][j]='#';
				}
				if(j+1<m){
					if(a[i][j+1]=='.') vis[i][j+1]=true;
					a[i][j+1]='#';
				}
			}
		}
	}
/*	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout << a[i][j];
		}
		cout << '\n';
	}*/
	int maxx=0;
	int xx[]={0,0,-1,1};
	int xy[]={-1,1,0,0};
	for(int i=0; i<n ;i++){
		for(int j=0; j<m; j++){
			if(a[i][j]=='.'){
				a[i][j]='#';
				q.push({i,j});
				int s=1;
				while(!q.empty()){
					int x = q.front().st;
					int y = q.front().nd;
					q.pop();
					for(int k=0; k<4; k++){
						int nx = x+xx[k];
						int ny = y+xy[k];
						
						if(nx<0 || ny<0 || nx>=n || ny>=m) continue;
						if(a[nx][ny]=='#') continue;
						a[nx][ny]='#';
					//	cout << nx << " " << ny << '\n';
						s++;
						q.push({nx,ny});
					}
				}
				maxx=max(s,maxx);
			//	cout << s << " ";
			}
		}
	}
	cout << maxx;
	return 0;
}
