#include<bits/stdc++.h>
#define st first
#define nd second
#define ull unsigned long long
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int mod = 1e9+7, N=4e4+3;
int n, m, u, v, w, k, pa[N];
struct DATA{
    int u, v, w;
    bool operator < (const DATA & d2) const{
        return w < d2.w;
    }
};
vec<DATA>g;
vec<pair<int,int>>mem;
int fp(int x){
    if(pa[x]==x) return x;
    return pa[x]=fp(pa[x]);
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m >> k;
    for(int i=0; i<m; i++){
        cin >> u >> v >> w;
        g.push_back({u,v,w});
    }
    for(int i=0; i<k; i++){
        cin >> u >> v;
        mem.push_back({u,v});
    }
    sort(g.begin(),g.end());
    int l=0, r=1e9+1, maxx=0;
    while(l<=r){
        int mid = (l+r)>>1;
        //cout << l << " " << r << " " << mid << '\n';
        for(int i=1; i<=n; i++) pa[i]=i;
        for(auto [u,v,w] : g){
            if(w>=mid) break;
            if(fp(u)^fp(v)){
                pa[fp(v)]=fp(u);
            }
        }
        int check=0;
        for(auto [u,v] : mem){
            if(fp(u)==fp(v)){
                check=1;
                break;
            }
        }
        if(check) r=mid-1;
        else{
            maxx=max(maxx,mid);
            l=mid+1;
        }
    }
    cout << (maxx==1e9+1? -1 : maxx);
}
/*
*/