#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int N=1e5+1, mod=1e9+7;
ll dis[N], ans, n ,s, e, p, u, v, w, c[N], a[N];
vec<pair<int,int>>g[N];
vec<int>stt;
void dfs(int u, int pa, ll noww){
    if(u==p){
        for(auto k : stt){
            c[k]=1;
        }
        ans-=noww;
        return;
    }
    for(auto [v,w] : g[u]){
        if(v==pa) continue;
        stt.push_back(v);
        dfs(v,u,noww+w);
        stt.pop_back();
    }
}
void dfs2(int u, int pa){
    dis[u]=a[u];
    for(auto [v,w] : g[u]){
        if(v==pa || c[v]) continue;  
        dfs2(v,u);
        dis[u]+=max((ll)0,(ll)dis[v]-2*w);
        //cout << u << " " << v << " " << dis[v]-2*w << '\n';
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
    for(int i=1; i<=n ;i++) cin >> a[i];
    cin >> s >> e >> p;
    
    stt.push_back(s);
    dfs(s,-1,0);
    stt.pop_back();
    stt.push_back(e);
    dfs(e,-1,0);
    stt.pop_back();
    //cout << ans << '\n';
    for(int i=1; i<=n; i++){
        if(c[i]){
            dfs2(i,-1);
            ans+=dis[i];
            //cout << '\n' << i << " " << dis[i] << "\n" ;
        }
    }
    cout << ans;
}
/*
4
1 2 2
2 3 7
2 4 1
10 7 4 5
1 4 3
4
1 2 4
1 3 5
2 4 2
7 5 6 4
3 4 2
14
1 2 2
2 3 1
2 4 2
2 5 2
5 7 2
7 8 2
5 6 2
1 9 1
1 10 3
10 11 1
10 12 10
12 13 1
12 14 1
5 5 3 5 5 5 5 3 10 7 3 1 5 5
1 6 4
*/