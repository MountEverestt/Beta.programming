#include<bits/stdc++.h>
using namespace std;
int p[105][105], vis[105][105], n, m, k;
struct DATA{
	int x, y;
};
queue<DATA>q;
int a(int x, int y){
	if(x>=1 && y>=1 && x<=m && y<=n) return 0;
	return 1;
}
int main(){
	cin >> n >> m >> k;
	
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			cin >> p[i][j];
		}
	}
//	for(int i=1; i<=n; i++){
	//	for(int j=1; j<=m; j++){
	//		cout << i << " " << j << " " << p[i][j] ; 
	//	}
	//	cout << endl;
//	}
	int xx[]={0,0,-1,1};
	int xy[]={-1,1,0,0};
//	cout << p[3][4];
	while(k--){
		int x,y;
		cin >> y >> x;
		q.push({x,y});
		memset(vis,0,sizeof vis);
		while(!q.empty()){
			int x = q.front().x;
			int y = q.front().y;
			q.pop();
		//	cout << x << " " << y << endl;
			if(p[x][y]==1){
				if(vis[x-1][y]){
					cout << "NO" << endl;
					break;
				}
				vis[x-1][y]=1;
				if(a(x-1,y)){
					cout << "N" << endl;
					break;
				}
				else q.push({x-1,y});
			//	cout << 1 << endl;
			}
			else if(p[x][y]==2){
				if(vis[x][y+1]){
					cout << "NO" << endl;
					break;
				}
				vis[x][y+1]=1;
				if(a(x,y+1)){
					cout << "E" << endl;
					break;
				}
				else q.push({x,y+1});
			//	cout << 2 << endl;
			}
			else if(p[x][y]==3){
				if(vis[x+1][y]){
					cout << "NO" << endl;
					break;
				}
				vis[x+1][y]=1;
				if(a(x+1,y)){
					cout << "S" << endl;
					break;
				}
				else q.push({x+1,y});
			//	cout << 3 << endl;
			}
			else if(p[x][y]==4){
				if(vis[x][y-1]){
					cout << "NO" << endl;
					break;
				}
				vis[x][y-1]=1;	
				if(a(x,y-1)){
					cout << "W" << endl;
					break;
				}
				else q.push({x,y-1});
			//	cout << 4 << endl;
			}
		}
		while(!q.empty()) q.pop();
		
	}
}