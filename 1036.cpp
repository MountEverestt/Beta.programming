#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=1e4+3, mod=1e9+7;
int n, m, x, p;
ll dp[(1<<8)], w;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m;
    for(int i=0; i<(1<<8); i++) dp[i]=2e18;
    for(int i=1; i<=n; i++){
        cin >> w;
        int p=0;
        for(int j=0; j<m; j++){
            cin >> x;
            if(x) p|=(1<<j);
        }
        dp[p]=min(dp[p],w);
    }
    for(int i=0; i<(1<<m); i++){
        for(int j=0; j<(1<<m); j++){
            dp[i|j]=min(dp[i|j],dp[i]+dp[j]);
        }
    }
    cout << dp[(1<<m)-1] << '\n';
}
/*
5 3
10 1 0 1
30 0 1 1
5 1 0 0
4 0 0 1
150 1 1 1
*/