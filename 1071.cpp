#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
bool mem[1005][1005];
int main(){
	int n, m, x, y, r, minx=1001, miny=1001, maxx=0, maxy=0;
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		cin >> x >> y;
		minx=min(minx,x);
		maxx=max(maxx,x);
		miny=min(miny,y);
		maxy=max(maxy,y);
		mem[x][y]=true;
	}
	while(m--){
		int s=0;
		cin >> x >> y >> r;
		for(int i=max(x-r,minx); i<=min(x+r,maxx); i++){
			for(int j=max(y-r,miny); j<=min(y+r,maxy); j++){
				if(mem[i][j]==true){
					mem[i][j]=false;
					s++;
				}
			}
		}
		cout << s << '\n';
	}
}