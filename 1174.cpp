#include<bits/stdc++.h>
#define st first
#define nd second 
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
int xx, yy, zz, a, b, c;
struct DATA{
	int x, y, z, a, b, c;
};
vec<DATA>g;
vec<int>p;
int calc(int x1, int y1, int z1, int x2, int y2, int z2){
	return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2);
}
int main(){
	int n, m;
	cin >> n;
	cin >> xx >> yy >> zz;
	g.push_back({xx,yy,zz,0,0,0});
	cin >> m;
	for(int i=1; i<=m; i++){
		cin >> xx >> yy >> zz >> a >> b >> c;
		g.push_back({xx,yy,zz,a,b,c});
		p.push_back(i);
	}
	int minn=INT_MAX;
	do{
		int aa=0;
		int bb=0;
		int cc=0;
		int w=0;
		int x=g[0].x, y=g[0].y, z=g[0].z;
		for(int k=0; k<p.size(); k++){
			int i=p[k];
			aa+=g[i].a;
			bb+=g[i].b;
			cc+=g[i].c;			
			w+=calc(x,y,z,g[i].x,g[i].y,g[i].z);
			x=g[i].x;
			y=g[i].y;
			z=g[i].z;
			if(aa>=n && bb>=n && cc>=n){
				minn=min(w,minn);
				break;
			}
		}
	}while(next_permutation(p.begin(),p.end()));
	cout << minn;
	return 0;
}
