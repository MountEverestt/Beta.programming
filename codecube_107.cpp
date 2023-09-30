#include<bits/stdc++.h>
#define st first
#define nd second
#define vec vector
#define umap unordered_map
#define ll long long
using namespace std;
ll qs[1000004];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n, m;
    ll ans=LONG_MIN;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> qs[i];
        qs[i]+=qs[i-1];
    }
    qs[n+1]=LONG_MIN;
    for(int i=n; i>=0; i--){
        if(i+m<=n) ans=max(ans,qs[i+m]-qs[i]);
        qs[i]=max(qs[i],qs[i+1]);
    //    cout << qs[i] << " ";
    }
    cout << ans;
    return 0;
}
