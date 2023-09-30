#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
struct DATA{
	int a, b;
	double w;
};
umap<char,vec<pair<char,int>>>g;
vec<DATA>ans;
int check;
int dfs(char now, char pa){
	vec<double>v;
	double mid;
	char x;
	int go=0;
	for(auto to : g[now]){
		if(to.st==pa) continue;
		go++;
		v.push_back(to.nd);
		x=to.st;
	}
	if(go==0) return 0;
	sort(v.begin(),v.end());
	if(v.size()%2==0){
		mid = (v[v.size()/2]+v[v.size()/2-1])/2;
		ans.push_back({now,x,mid});
	}
	else{
		mid = v[(v.size()-1)/2];
		ans.push_back({now,x,mid});
	}
	if(x=='Y'){
		check=1;
		return 0;
	}
	
	dfs(x,now);
}
int main(){
	int n, w;
	char a, b;
	cin >> n;
	while(n--){
		cin >> a >> b >> w;
		g[a].push_back({b,w});
		g[b].push_back({a,w});
	}
	dfs('X',' ');
	double sum=0;
	if(!check) cout << "broken"; 
	else {
		for(auto k : ans){
			printf("%c %c %.1lf\n", k.a, k.b, k.w);
			sum+=k.w;
		}
		printf("%.1lf", sum);
	}
}