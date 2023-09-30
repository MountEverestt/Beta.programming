#include<bits/stdc++.h>
#define st first
#define nd second
#define ull unsigned long long
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int mod = 1e9+7, N=2e5+1;
int n, m, t, dp[N], ma[N], a[N];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m >> t;
    int j=1, nub=0;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    for(int i=1; i<=n; i++){
        while(nub<m && j<=n){
            if(!ma[a[j]] && a[j]<=m) nub++;
            ma[a[j]]++;
            j++;
        }
        if(nub==m) dp[i]=j-1;
        ma[a[i]]--;
        if(a[i]<=m && !ma[a[i]]){
            nub--;
        }
    }
    //for(int i=1; i<=n ;i++) cout << dp[i] << " ";
    //cout << '\n';
    int l ,r;
    while(t--){
        cin >> l >> r;
        cout << (dp[l]<=r && dp[l]?"YES":"NO") << '\n';
    }
    //for(int i=1; i<=n; i++) cout << dp[i] << " ";
}
/*
10 3 5
1 2 3 1 2 7 8 2 3 1
1 5
4 8
4 9
8 10
7 8
6 3 3
1 2 3 1 2 3
1 6
2 4
3 6
*/