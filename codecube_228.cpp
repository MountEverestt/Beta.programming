#include<bits/stdc++.h>
#define st first
#define nd second
#define vec vector
#define ll long long
#define umap unordered_map
using namespace std;
ll dis[3][100004];
struct DATA{
    int now;
    ll w;
    int use;
    bool operator < (const DATA & d2) const{
        return w > d2.w;
    }
};
vec<pair<int,int>>g[100004];
priority_queue<DATA>pq;
int main(){
    int n, m, k, p, u, v, w;
    cin >> n >> m >> k >> p;
    for(int i=1; i<=m; i++){
        cin >> u >> v >> w;
        g[u].emplace_back(v,w);
        g[v].emplace_back(u,w);
    }
    memset(dis,0x3f,sizeof dis);
    pq.push({1,0,0});
    dis[0][1]=dis[0][0]=0;
    while(!pq.empty()){
        int now = pq.top().now;
        ll noww = pq.top().w;
        int use = pq.top().use;
        pq.pop();
        if(dis[use][now]<noww || noww>p) continue;
        for(auto [x,w] : g[now]){
            if(dis[use][x]>w+noww){
                dis[use][x]=w+noww;
                pq.push({x,dis[use][x],use});
            }
            if(!use && w>k && dis[1][x]>k+noww){
                dis[1][x]=k+noww;
                pq.push({x,dis[1][x],1});
            }
        }
    }
    ll ans=min(dis[0][n],dis[1][n]);
    if(ans>=p) cout << "No Honey TT";
    else{
        cout << "Happy Winnie the Pooh :3" << '\n' << ans;
    }
    return 0;
}