#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
ll a[500005], b[500005], qsa[500005], qsb[500005];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i] >> b[i];
    }
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    for(int i=1; i<=n; i++){
        qsa[i]=qsa[i-1]+a[i];
        qsb[i]=qsb[i-1]+b[i];
    }
    ll ans=0;
    for(int i=1; i<=n; i++){
        ans+=(a[i]*i-qsa[i])+(b[i]*i-qsb[i]);
        //cout << a[i] << " " << qsa[i] << " " << b[i] << " " << qsb[i] << '\n';
    }
    cout << ans;
}
