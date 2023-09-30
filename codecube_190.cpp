#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int N=1e5+5, mod=1e9+7;
int n ,m, u, v, vis[N], c[N], mem[N], s, dis[N];
vec<pair<int,int>>stt, g[N];
pair<int,int>edg[N];
void dfs(int u, int pa){
    vis[u]=1;
    //cout << u << " " << pa << '\n';
    for(auto [v,edv] : g[u]){
        if(vis[v]==2 || v==pa) continue;
        if(vis[v]==1){
            int check=0;
            for(auto [k,ed] : stt){
                if(check){
                    c[ed]=-1; 
                    mem[k]=1;
                }
                if(k==v){
                    check=1;
                    //cout << k << " " << ed << '\n';
                }
            }
            c[edv]=-1;
            mem[v]=1;
            //cout << v << " : ";
            //for(int i=0; i<m; i++) cout << c[i] << " ";
            //cout << '\n';
            continue;
        }
        stt.push_back({v,edv});
        dfs(v,u);
        stt.pop_back();
    }
    vis[u]=2;
}
int dfs2(int u){
    vis[u]=3;
    //cout << u << '\n';
    for(auto [v,ed] : g[u]){
        if(mem[v]) continue;
        if(vis[v]^3){
            dfs2(v);
            dis[u]+=dis[v];
        }
    }
    return ++dis[u];
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> u >> v;
        g[u].push_back({v,i});
        g[v].push_back({u,i});
        edg[i]={u,v};
    }    
    stt.push_back({1,-1});
    dfs(1,-1);
    stt.pop_back();
    for(int i=1; i<=n ;i++){
        if(!mem[i] || vis[i]==3) continue;
        dfs2(i); 
        //cout << i << " " << dis[i]-1 << '\n';
    }
    //for(int i=1; i<=n; i++) cout << dis[i] << " ";
    //cout << '\n';
    //for(int i=0; i<m; i++) cout << c[i] << " ";
    //cout << '\n';
    for(int i=0; i<m; i++){
        if(c[i]==-1){
            cout << 0 << " ";
            continue;
        }
        int u = edg[i].st, v = edg[i].nd;
        //cout << u << " " << v << " " << dis[v]-1 << "," << dis[u]-1 << " : ";
        if(dis[u]>dis[v]){
            cout << (ll)dis[v]*(n-dis[v]) << " ";
        }
        else{
            cout << (ll)dis[u]*(n-dis[u]) << " ";
        }
    }
}
/*
6 6
1 2
1 3
1 4
2 3
2 5
3 6
*/