#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int N=1e5+2, mod=1e9+7;
int n, u, v, w;
ll dis[N];
vec<pair<int,int>>g[N];
void dfs(int now, int pa){
    for(auto[x,w] : g[now]){
        if(x==pa) continue;
        dfs(x,now);
        if(dis[now]<dis[x]+w){
            dis[now]=dis[x]+w;
        }      
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n;
    for(int i=1; i<n; i++){
        cin >> u >> v >> w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    dfs(1,-1);
    cout << dis[1];
}
