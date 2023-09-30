#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=1e4+5, mod=1e9+7;
ll n, m, k, dp[105][N], a[105][N];
deque<pair<ll,int>>dq;//value,idx
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m >> k;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++) cin >> a[i][j];
    }
    for(int j=1; j<=m; j++) dp[1][j]=a[1][j];
    for(int i=2; i<=n; i++){
        for(int j=1; j<=k+1; j++){
            while(!dq.empty() && dq.back().st<dp[i-1][j]) dq.pop_back();
            dq.push_back({dp[i-1][j],j});
        }
        int x = dq.front().st;
        for(int j=1; j<=k+1; j++) dp[i][j]=x+a[i][j];
        for(int j=k+2; j<=m; j++){
            while(!dq.empty() && j-dq.front().nd>=k+1) dq.pop_front();
            while(!dq.empty() && dq.back().st<dp[i-1][j]) dq.pop_back();
            dq.push_back({dp[i-1][j],j});
            dp[i][j]=dq.front().st+a[i][j];
        }
        dq.clear();
        for(int j=m; j>=m-k; j--){
            while(!dq.empty() && dq.back().st<dp[i-1][j]) dq.pop_back();
            dq.push_back({dp[i-1][j],j});
        }
        x = dq.front().st;
        for(int j=m; j>=m-k; j--) dp[i][j]=max(dp[i][j],x+a[i][j]);
        for(int j=m-k-1; j>=1; j--){
            while(!dq.empty() && dq.front().nd-j>=k+1) dq.pop_front();
            while(!dq.empty() && dq.back().st<dp[i-1][j]) dq.pop_back();
            dq.push_back({dp[i-1][j],j});
            dp[i][j]=max(dp[i][j],dq.front().st+a[i][j]);
        }
        dq.clear();
    }
    ll maxx=0;
    for(int j=1; j<=m; j++) maxx=max(maxx,dp[n][j]);
    cout << maxx;
}
/*
*/