#include<bits/stdc++.h>
#define st first
#define nd second
#define vec vector
using namespace std;
struct DATA{
	int x, y;
	bool operator < (const DATA & d2) const{
		if(x==d2.x) return y > d2.y;
		return x < d2.x;
	}
};
struct REVERSE{
	int x, y;
	bool operator < (const REVERSE & d2) const{
		if(x==d2.x) return y < d2.y;
		return x > d2.x;
	}
};
vec<DATA>point;
vec<REVERSE>v;
int main(){
	int n, x, y;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d%d", &x, &y);
		v.push_back({x,y});
	}	
	sort(v.begin(),v.end());
	int maxx=0, end=v[0].x;
	for(auto k : v){
		if(k.y>=maxx || k.x==end){
			maxx=k.y;
			point.push_back({k.x,k.y});	
		}
	}
	sort(point.begin(),point.end());
	for(auto k : point) printf("%d %d\n", k.x, k.y);
}
