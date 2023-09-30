#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
char a[66][66];
int qs[66][66];
bool vis[66][66];
map<int,int>ma;
queue<pair<int,int>>q;
int main(){	
	int n, m;
	cin >> m >> n;
	for(int i=1; i<=64; i++) ma[i*i]=i;
	for(int i=1; i<=n;i++){
		for(int j=1; j<=m; j++){
			cin >> a[i][j];
			if(a[i][j]=='T') qs[i][j]=-4226;
			else qs[i][j]=1;
			qs[i][j]+=qs[i-1][j]+qs[i][j-1]-qs[i-1][j-1];
		}
	}
	int maxx=0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			for(int k=1; k<=min(n,m); k++){
				if(i+k<=n && j+k<=m){
					int ss = qs[i+k][j+k]-qs[i+k][j-1]-qs[i-1][j+k]+qs[i-1][j-1];
				//	cout << i << " " << j << " " << ss << '\n';
					if(!ma[ss]) continue;
					maxx=max(maxx,qs[i+k][j+k]-qs[i+k][j-1]-qs[i-1][j+k]+qs[i-1][j-1]);
				}
			}
		}
	}
	int p=sqrt(maxx);
	cout << maxx << " ";
	if(!maxx){
		cout << 0;
		return 0;
	}
	int xx[]={0,1,0,-1};
	int xy[]={1,0,-1,0};
	int water=4225;
	for(int i=1; i<=n-p+1; i++){
		for(int j=1; j<=m-p+1; j++){
			if(a[i][j]=='T') continue;
			bool check=false;
			int w=0;
			memset(vis,0,sizeof vis);
		//	cout << i << " " << j << '\n'; 
			for(int ii=i; ii<=i+p-1; ii++){
				for(int jj=j; jj<=j+p-1; jj++){
					if(a[ii][jj]=='T'){
						check=true;
						break;
					}
					if(vis[ii][jj]) continue;
					if(a[ii][jj]=='P'){
					//	cout << i << ' ' << j << endl;						
						vis[ii][jj]=true;
						q.push({ii,jj});
						w++;
						while(!q.empty()){
							int x = q.front().st;
							int y = q.front().nd;
							q.pop();
						
							for(int k=0; k<4; k++){
								int nx = x+xx[k];
								int ny = y+xy[k];
									
								if(nx<1 || ny<1 || nx>n | ny>m) continue;
								if(vis[nx][ny]) continue;
								vis[nx][ny]=true;
								if(a[nx][ny]=='P') q.push({nx,ny});
							}
						}
					}
				}
				if(check) break;
			}
			if(!check){
				water=min(water,w);
			}
		}
	}
	cout << water;
}
