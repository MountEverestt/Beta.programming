#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=1e5+5, mod=1e9+7;
int n, t, x, pa[N], mem[N];
int fp(int x){
    if(pa[x]==x) return x;
    return pa[x]=fp(pa[x]);
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> t;
    for(int i=1; i<=n; i++){
        cin >> mem[i];
        pa[i]=i;
    }
    while(t--){
        int u, v;
        cin >> u >> v;
        if(fp(u)==fp(v)){
            cout << -1 << '\n';
        }
        else if(mem[fp(u)]>mem[fp(v)] || (mem[fp(u)]==mem[fp(v)] && fp(u)<fp(v))){
            mem[fp(u)]+=mem[fp(v)]/2;
            pa[fp(v)]=fp(u);
            cout << fp(u) << '\n';
        }
        else{
            mem[fp(v)]+=mem[fp(u)]/2;
            pa[fp(u)]=fp(v);
            cout << fp(v) << '\n';
        }
    }
}
/*
*/