#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=2e2+5, mod=1e9+7;
int n, lim, a[N][N], b[N][N], c[N][N];
vec<int>v;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> lim;
    for(int i=1; i<=2*n+1; i++){
        if(i&1){
            for(int j=1; j<=n; j++) cin >> a[i][j];
        }
        else{
            for(int j=1; j<=n+1; j++) cin >> b[i][j];
        }
    }
    for(int i=1; i<=2*n-1; i+=2){
        for(int j=1; j<=n; j++){
            v.push_back(3*(a[i][j]-a[i+2][j])+5*(b[i+1][j]-b[i+1][j+1]));
        }
    }
    ll ans=0;
    sort(v.begin(),v.end());
    for(int i=0; i<lim; i++) ans+=v[i];
    cout << ans;
}
/*
*/