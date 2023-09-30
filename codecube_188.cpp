#include<bits/stdc++.h>
#define ll long long
#define st first
#define nd second
using namespace std;
unordered_map<int,vector<int>>g;
int main(){
	int n, m, x;
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		scanf("%d", &x);
		g[x].push_back(i);
	}
	int s, e, w;
	while(m--){
		scanf("%d%d%d", &s, &e, &w);
		int l = lower_bound(g[w].begin(),g[w].end(),s)-g[w].begin();
		int r = upper_bound(g[w].begin(),g[w].end(),e)-g[w].begin();
		cout << r-l <<'\n';
	}
}
