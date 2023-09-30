#include<bits/stdc++.h>
#define st first
#define nd second
#define ull unsigned long long
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int mod = 1e9+7, N=1e5+1;
int n, m, u, v, w, s, e, c[N];
ll dis[N];
struct DATA{
    int now;
    ll w;
    bool operator < (const DATA & d2) const{
        return  w > d2.w;
    }
};
priority_queue<DATA>pq;
vec<pair<int,int>>g[N];
vec<int>g2[N], stt;
void dfs(int u){
    if(u==e){
        for(auto k : stt) c[k]=1;
        return ;
    }
    for(auto v : g2[u]){
        stt.push_back(v);
        dfs(v);
        stt.pop_back();
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> u >> v >> w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    cin >> s >> e;
    for(int i=1; i<=n; i++) dis[i]=1e18;
    pq.push({s,0});
    dis[s]=0;
    while(!pq.empty()){
        int now = pq.top().now;
        ll noww = pq.top().w;
        pq.pop();
        if(dis[now]<noww) continue;
        for(auto [x,w] : g[now]){
            if(dis[x]>w+noww){
                dis[x]=w+noww;
                pq.push({x,dis[x]});
            }
        }
    }
    for(int i=1; i<=n; i++){
        for(auto [x,w] : g[i]){
            if(dis[i]+w==dis[x]){
                g2[i].push_back(x);
            }
        }
    }
    c[s]=1;
    dfs(s);
    cin >> s >> e;
    for(int i=1; i<=n ;i++) dis[i]=1e18;
    pq.push({s,0});
    dis[s]=0;
    while(!pq.empty()){
        int now = pq.top().now;
        ll noww = pq.top().w;
        pq.pop();
        if(dis[now]<noww || c[now]) continue;
        for(auto [x,w] : g[now]){
            if(dis[x]>w+noww){
                dis[x]=w+noww;
                pq.push({x,dis[x]});
            }
        }
    }
    cout << (dis[e]==1e18?-1:dis[e]);
}
/*
*/