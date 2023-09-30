#include<bits/stdc++.h>
#define ll long long
#define st first
#define nd second
#define vec vector
#define umap unordered_map
using namespace std;
vec<int>go[500001];
queue<int>q;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int x, n, m, a, b, k;
	cin >> n >> m >> k;
	for(int i=1; i<=m; i++){
		cin >> a >> b;
		go[a].push_back(b);
	}
	for(int i=1; i<=k; i++){
		cin >> x;
		go[x].push_back(-1);
	}
	int ans=0, check;
	q.push(1);
	while(!q.empty()){
		int now = q.front();
		ans=max(ans,now);
		if(now==n){
			cout << 1;
			return 0;
		}
		q.pop();
		
		if(go[now].empty() && now<n) q.push(now+1);
		else{
			check=1;
			for(auto k : go[now]){
				if(k==-1){
					check=0;
					continue;
				}
				q.push(k);
			}	
			if(check) q.push(now+1);
		}
	}
	cout << "0" << " " << ans;
}
