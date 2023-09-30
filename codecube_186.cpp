#include<bits/stdc++.h>
#define ll long long
#define vec vector
#define umap unordered_map
#define st first
#define nd second
using namespace std;
int go[100001];
vec<pair<int,int>>g[100001];
int dfs(int now){
	int next=0;
	for(auto to : g[now]){
		int x = to.st;
		int w = to.nd;
		if(go[x]!=0) continue;
		next++;
		go[x]=go[now]^w;
		dfs(x);
	}
	if(next==0) return 0;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, u, v, w;
	cin >> n >> m;
	for(int i=2; i<=n ;i++){
		cin >> u >> v >> w;
		g[u].push_back({v,w});
		g[v].push_back({u,w});
	}
	dfs(1);
	int s, e;
	while(m--){
		cin >> s >> e;
		printf("%d\n", go[s]^go[e]);
	}
}