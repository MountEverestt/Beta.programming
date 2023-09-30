#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=5e4+2;
int n, m, u, v, w, p;
ll dis[N][20];
string s, xmas;
struct DATA{
    int u, p;
    ll w;
    bool operator < (const DATA & d2) const{
        return w > d2.w;
    }
};
vec<pair<int,ll>>g[N];
map<char,int>ma;
priority_queue<DATA>pq;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m >> s;
    ma['X']=1;
    ma['M']=2;
    ma['A']=4;
    ma['S']=8;
    for(auto k : s){
        p|=ma[k]; //0010|0100=0110
    }
    cin >> xmas;
    for(int i=0; i<m; i++){
        cin >> u >> v >> w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    memset(dis,127,sizeof dis);
    p|=ma[xmas[n-2]];
    dis[n][p]=0;
    pq.push({n,p,0});
    while(!pq.empty()){
        int u = pq.top().u;
        int p = pq.top().p;
        ll noww = pq.top().w;
        pq.pop();
        if(dis[u][p]<noww) continue;
        for(auto [v,w] : g[u]){
            int np = ma[xmas[v-2]];
            if(dis[v][np|p]>noww+w){
                dis[v][np|p]=noww+w;
                pq.push({v,np|p,noww+w});
            }
        }
    }
    cout << dis[1][15];// 1111=XMAS
}