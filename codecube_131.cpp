#include<bits/stdc++.h>
#define st first
#define nd second
#define ull unsigned long long
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int mod = 1e9+7, N=1e2+1;
int a[N], b[N];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];
    sort(a,a+n);
    sort(b,b+m);
    int minn=100+a[0]+b[0];
    if(n>1) minn=min(minn,a[0]+a[1]);
    if(m>1) minn=min(minn,b[0]+b[1]);
    cout << minn;
}
/*
*/