#include<bits/stdc++.h>
#define st first
#define nd second
#define vec vector
#define umap unordered_map
#define ll long long
using namespace std;
set<int>s[502];
umap<int,vec<int>>p, g;
int dis[502][502];
bool vis[502];
queue<pair<int,int>>q;
int diss(int s){
	q.push({s,0});
	while(!q.empty()){
		int now = q.front().st;
		int t   = q.front().nd;
		q.pop();
		if(dis[s][now]==0) dis[s][now]=t;
		dis[s][now]=min(dis[s][now],t);
		if(dis[now][s]==0) dis[now][s]=t;
		dis[now][s]=min(dis[now][s],t);
		for(auto to : g[now]){
			if(vis[to]) continue;
			vis[to]=true;
			
			q.push({to,t+1});
 		}
	}
}
int main(){
	int n, m, x, u;
	scanf("%d%d", &n, &m);
	for(int i=1; i<=m; i++){
		scanf("%d", &x);
		for(int j=1; j<=x; j++){
			scanf("%d", &u);
			s[i].insert(u);
			p[u].push_back(i);
		}
	}
	bool have;
	for(int i=1; i<m; i++){
		for(int j=i+1; j<=m; j++){
			have=false;
			if(s[i].size()>s[j].size()){
				for(auto k : s[j]){
					if(s[i].find(k)!=s[i].end()){
						have=true;
						break;
					}
				}
			}
			else{
				for(auto k : s[i]){
					if(s[j].find(k)!=s[j].end()){
						have=true;
						break;
					}
				}
			}
			if(have){
				g[i].push_back(j);
				g[j].push_back(i);
			}
		}
	}
	for(int i=1; i<=m; i++){
		memset(vis,0,sizeof vis);
		vis[i]=true;
		diss(i);
	}
	int t;
	scanf("%d", &t);
	int s, e, ans;
	while(t--){
		ans=INT_MAX;
		scanf("%d%d", &s, &e);
		for(auto i : p[s]){
			for(auto j : p[e]){
				if(i==j){
					ans=0;
					break;
				}
				if(dis[i][j]>0) ans=min(ans,dis[i][j]);
			}
			if(!ans) break;
		}
		if(ans==INT_MAX) printf("impossible\n");
		else printf("%d\n", ans);  
	}
}
