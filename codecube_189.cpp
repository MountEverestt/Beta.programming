#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int N=1e5+2, mod=1e9+7;
int n, m , u, v, w, s, e;
ll sum=0, dis[N];
struct DATA{
    int now, maxx,  w;
    bool operator < (const DATA & d2) const{
        return w > d2.w;
    }
};
priority_queue<DATA>pq;
vec<pair<int,int>>g[N];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m >> s >> e;
    for(int i=0; i<m; i++){
        cin >> u >> v >> w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
        sum+=w;
    }
    int mem=2e9;
    for(int i=0; i<n; i++) dis[i]=2e9;
    pq.push({s,0,0});
    while(!pq.empty()){
        int now = pq.top().now;
        int maxx= pq.top().maxx;
        int noww = pq.top().w;
        pq.pop();
        if(dis[now]<noww-maxx) continue;
        dis[now]=noww-maxx;
        if(now==e){
            mem=min(mem,noww-maxx);
            continue;
        }
        for(auto [x,w] : g[now]){
            pq.push({x,max(maxx,w),noww+w});
        }
    }
    cout << sum-mem;
}
/*
*/