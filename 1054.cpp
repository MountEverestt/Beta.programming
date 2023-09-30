#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
#define endl '\n'
using namespace std;
struct DATA{
	int x, y ,r;
	bool operator < (const DATA & d2) const {
		return x < d2.x;
	}
};
vec<DATA>v;
int main(){
	int n, x, y, r;
	scanf("%d", &n);
	for(int k=1; k<=n; k++){
		scanf("%d%d%d", &x, &y, &r);
		v.push_back({x,y,r});
	}
	ll s=0;
	sort(v.begin(),v.end());
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			int xx = v[j].x-v[i].x;
			if(abs(xx)>20) break;
			xx*=xx;
			int xy = v[j].y-v[i].y;
			xy*=xy;
			if(pow(v[j].r+v[i].r,2)>xx+xy) s++;
		}
	}
	printf("%lld", s);
	return 0;
}
