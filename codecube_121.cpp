#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
int pa[100002], a[100002];
vec<pair<int,pair<int,int>>>g;
int fp(int x){
	if(pa[x]==x) return x;
	return pa[x]=fp(pa[x]);
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i];
		pa[i]=i;
	}
	int m, u, v;
	cin >> m;
	for(int i=1; i<=m; i++){
		cin >> u >> v;
		g.push_back({a[u]+a[v],{u,v}});
	}
	sort(g.begin(),g.end());
	ll ans=0;
	for(auto k : g){
		if(fp(k.nd.st)!=fp(k.nd.nd)){
			pa[fp(k.nd.nd)]=fp(k.nd.st);
			ans+=k.st;
		}	
	}
	cout << ans;
	return 0;
}