#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N = 2e2+2;
int n, m, u, v, k, pa[N], a[20], dp[N][N], w, dis[(1<<16)][16];
vec<pair<int,int>>g[N];
struct DATA{
    int u, p, w;
    bool operator < (const DATA & d2) const{
        return w > d2.w;
    }
};
priority_queue<DATA>pq;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m >> k;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) dp[i][j]=1e8;
    }
    a[k]=n;
    for(int i=0; i<k; i++) cin >> a[i];
    for(int i=0; i<m; i++){
        cin >> u >> v >> w;
        dp[u][v]=dp[v][u]=min({dp[u][v],dp[v][u],w});
    }
    for(int i=1; i<=n; i++) dp[i][i]=0;
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
            }
        }
    }
    for(int i=0; i<k; i++){
        for(int j=i+1; j<=k; j++){
            int u = a[i], v = a[j];
            g[i].push_back({j,dp[u][v]});
            g[j].push_back({i,dp[u][v]});
            //cout << u << " " << v << " " << dp[u][v] << '\n';
        }
    }
    for(int i=0; i<=(1<<(k+1))-1; i++){
        for(int j=0; j<=k; j++) dis[i][j]=2e9;
    }
    
    for(int i=0; i<=k; i++){
        dis[(1<<i)][i]=dp[1][a[i]];
        pq.push({i,(1<<i),dp[1][a[i]]});
        //cout << (1<<i) << " " << i << " " << a[i] << '\n';
    }
    //k=4-->1111==(1<<4)-1;
    while(!pq.empty()){
        auto [u,p,w] = pq.top();
        pq.pop();
        //cout << u << " " << p << " " << w << '\n';
        if(u==k && p==(1<<(k+1))-1){
            cout << w;
            return 0;
        }
        if(dis[p][u]<w) continue;
        for(auto [v,ww] : g[u]){
            int np = p|(1<<v);
            if(dis[np][v]>ww+w){
                dis[np][v]=ww+w;
                pq.push({v,np,w+ww});
            }
        }
    }
}
/*
7 9 1
4
1 2 1
1 3 2
4 1 2
2 4 2
3 4 1
4 5 1
4 6 3
5 7 1
7 6 2*/