#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
int pa[100003];
struct DATA{
	int w, i, u, v;
	bool operator < (const DATA & d2) const{
		return w > d2.w;
	}
};
vec<DATA>g;
vec<pair<int,int>>gg;
int fp(int x){
	if(pa[x]==x) return x;
	return pa[x]=fp(pa[x]);
}
set<int>s;
int main(){
	int n, m, u, v, w;
	cin >> n >> m;
	for(int i=1; i<=n; i++) pa[i]=i;
	for(int i=1; i<=m; i++){
		cin >> u >> v >> w;
		pa[fp(v)]=fp(u);
		g.push_back({w,i,u,v});
	}	
	int p;
	cin >> p;
	for(int i=2; i<=n ;i++){
		if(fp(i)!=fp(1)){
			cout << -1;
			return 0;
		}
	}
	ll ans=0;
	int cou=0;
	for(int i=1; i<=n; i++) pa[i]=i;
	sort(g.begin(),g.end());
	for(auto k : g){
		//cout << k.i << " " << k.u << " " << k.v << " " << k.w << '\n';
		if(fp(k.u)!=fp(k.v)){			
			pa[fp(k.u)]=fp(k.v);
 			s.insert(k.i);
			ans+=k.w;
			cou++;
		}
		else gg.push_back({k.w,k.i}); 
	}
	sort(gg.begin(),gg.end());
	reverse(gg.begin(),gg.end());
	for(auto k : gg){
		if(cou==n) break;
		s.insert(k.nd);
		cou++;
		ans+=k.st;
	}
	if(cou!=n){
		cout << -1;
		return 0;
	}
	cout << ans << '\n';
	if(p==2){
		for(auto k : s) cout << k << " ";
	}
	return 0;
}