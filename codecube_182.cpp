#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int N=1e5+2, mod=1e9+7;
ll qsa[N], qsb[N];
int x, y, n;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> x >> y;
    for(int i=1; i<=n; i++){
        cin >> qsa[i];
        qsa[i]+=qsa[i-1];
    }
    for(int i=1; i<=n; i++){
        cin >> qsb[i];
        qsb[i]+=qsb[i-1];
    }
    ll maxx=0, maxy=0;
    for(int i=x; i<=n; i++){
        maxx=max(maxx,qsa[i]-qsa[i-x]);
    }
    for(int i=y; i<=n; i++){
        maxy=max(maxy,qsb[i]-qsb[i-y]);
    }
    cout << maxx*y+maxy*x;
}
/*
*/