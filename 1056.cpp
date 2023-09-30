#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=2e3+5, mod=1e9+7;
int a[N], n, k;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    ll ans=0;
    for(int i=n-1; i>=0; i-=k) ans+=a[i];
    cout << ans;
}
/*
*/