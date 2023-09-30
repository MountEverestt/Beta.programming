#include<bits/stdc++.h>
#define ll long long
#define st first
#define nd second
using namespace std;
int a[20][20];
queue<pair<int,int>>q;
int main(){
	int n, m;
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n ;j++){
			cin >> a[i][j];
		}
	}
	int xx[]={0,0,-1,1};
	int xy[]={-1,1,0,0};
	int ans=0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(a[i][j]!=0){
				q.push({i,j});
				int p=a[i][j], minx=i, miny=j, maxx=i, maxy=j, t=0;
				a[i][j]=0;
				while(!q.empty()){
					int x = q.front().st;
					int y = q.front().nd;
					q.pop();
					
					for(int k=0; k<4; k++){
						int nx = x+xx[k];
						int ny = y+xy[k];
						
						if(nx>=1 && ny>=1 && nx<=n && ny<=n){
							if(a[nx][ny]==p){
								t++;
								minx=min(minx,nx);
								maxx=max(maxx,nx);
								miny=min(miny,ny);
								maxy=max(maxy,ny);
								q.push({nx,ny});
								a[nx][ny]=0;
							}
						}
					}
				}
				if(t==2 && maxx-minx==1 && maxy-miny==1) ans++;
			//	cout << maxx << " " << minx << " " << maxy << " " << miny << " " << t << endl;
			}
		}
	}
	cout << ans;
}