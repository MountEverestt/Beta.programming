#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=3e5+5, mod=1e9+7;
int n, dis[N], u, v;
vec<int>g[N];
void dfs(int u, int pa){
    for(auto v : g[u]){
        if(v==pa) continue;
        dfs(v,u);
        if(u<v) dis[u]=max(dis[u],dis[v]+1);    
    }
}
void dfs2(int u, int pa){
    for(auto v : g[u]){
        if(v==pa) continue;
        if(u>v) dis[v]=max(dis[v],dis[u]+1); 
        dfs2(v,u);
    }
}
int main(){      
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n;
    for(int i=0; i<n-1; i++){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,-1);
    dfs2(1,-1);
    int ans=0;
    for(int i=1; i<=n; i++){
        ans=max(ans,dis[i]);
        //cout << i << " " << dis[i] << '\n';
    }
    cout << ans+1;
}
/*
*/