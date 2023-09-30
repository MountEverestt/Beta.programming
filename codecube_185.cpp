#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
#define endl '\n'
using namespace std;
struct DATA{
	int now;
	ll w;
	int t;
	bool operator < (const DATA & d2) const{
		return w > d2.w;
	}
};
bool vis[10005][10];
vec<pair<int,int>>g[10005];
priority_queue<DATA>pq;
int main(){
	int n, m, k, s, e, u, v, w;
	scanf("%d%d%d%d%d", &n ,&m, &k, &s, &e);
	for(int i=1; i<=m ;i++){
		scanf("%d%d%d", &u, &v, &w);
		g[u].push_back({v,w});
	}
	ll minn=LONG_MAX;
	pq.push({s,0,1});
	while(!pq.empty()){
		int now = pq.top().now;
		ll noww = pq.top().w;
		int t   = pq.top().t;
		pq.pop();
	//	cout << "t : " << t << " now : " << now << " w : " << noww << '\n';
		if(now==e && t%k==0){
			cout << noww;
			return 0;
		}		
		if(vis[now][t%k]) continue;
		vis[now][t%k]=true;
		for(auto to : g[now]){
			int x = to.st;
			int w = to.nd;
			pq.push({x,w+noww,t+1});
		}
	}
	cout << -1;
	return 0;
}