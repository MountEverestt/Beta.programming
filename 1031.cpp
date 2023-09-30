#include<bits/stdc++.h>
#define ll long long
#define st first
#define nd second
#define vec vector
#define umap unordered_map
#define endl '\n'
using namespace std;
umap<int,vec<int>>g;
queue<pair<int,int>>q;
int ans, n, m, k, vis[100001];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int s, e;
	cin >> k >> n >> m;
	for(int i=1; i<=m; i++){
		cin >> s >> e;
		g[s].push_back(e);
	}
	q.push({1,k});
	vis[1]=1;
	int ans=0;
	while(!q.empty()){
		int now = q.front().st;
		int w   = q.front().nd;
		q.pop();		
//		cout << now << " " << w << endl;
		if(now==n){
			cout << n;
			return 0;
		}
		ans=max(ans,now);
		if(!w) continue;		
		
		for(auto to : g[now]){
			if(vis[to]) continue;
			vis[to]=1;
			q.push({to,w-1});			
		}
	}
	cout << ans;
}