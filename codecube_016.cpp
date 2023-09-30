#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=2e3+2, mod=1e9+7;
ll n, a[N];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n;
    n*=2;
    for(int i=1; i<=n; i++) cin >> a[i];
    sort(a+1,a+n+1);
    ll ans=0;
    for(int i=1; i<=n/2; i++){
        ans+=a[i]*a[n-(i-1)];
    }
    cout << ans;
}
/*
5
5 4 3 1 2
1 1 0 1 0
*/