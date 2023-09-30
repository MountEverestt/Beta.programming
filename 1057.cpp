//Weighted Interval Scheduling
#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=1e3+5, mod=1e9+7;
int n, m, v, ch, vis[N];
vec<int>g[N];
void dfs(int u){
    vis[u]=1;
    for(auto v : g[u]){
        if(vis[v]){
            ch=1;
            return ;
        }
        dfs(v);
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> m;
        for(int j=1; j<=m; j++){
            cin >> v;
            g[i].push_back(v);
        }
    }
    for(int i=1; i<=n; i++){
        memset(vis,0,sizeof vis);
        ch=0;
        dfs(i);
        cout << (ch?"YES":"NO") << '\n';
    }
}
/*
*/