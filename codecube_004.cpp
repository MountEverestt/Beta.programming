#include<bits/stdc++.h>
#define st first
#define nd second
#define ull unsigned long long
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int N=1e5, mod=1e9+7;
int n, a[N];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);  
    cin >> n >> a[0];
    int gcd = a[0];
    for(int i=1; i<n; i++){
        cin >> a[i];
        gcd=__gcd(gcd,a[i]);
    }
    ll ans=0;
    for(int i=0; i<n ;i++){
        ans+=a[i]/gcd;
    }
    cout << ans;
}
/*
*/