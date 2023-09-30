#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int N=1e3+3, mod=1e9+7;
int n, u, v;
bitset<N>a[N];
ll dp[4][N][N];
string s;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++){
        s=string(n,0);
        cin >> s;
        for(int j=0; j<n; j++){
            a[i][j+1]=s[j]-'0';
        }
    }
    dp[0][1][0]=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(!a[i][j]) dp[0][i][j]=0;
            else dp[0][i][j]=dp[0][i-1][j]+dp[0][i][j-1];
            dp[0][i][j]%=mod;
        }
    }
    //for(int i=1; i<=n; i++){
    //    for(int j=1; j<=n; j++) cout << dp[0][i][j] << " ";
    //    cout << '\n';
    //}
    //cout << '\n';
    dp[1][n][0]=1;
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n; j++){
            if(!a[i][j]) dp[1][i][j]=0;
            else dp[1][i][j]=dp[1][i+1][j]+dp[1][i][j-1];
            dp[1][i][j]%=mod;
        }
    }
    //for(int i=1; i<=n; i++){
    //    for(int j=1; j<=n; j++) cout << dp[1][i][j] << " ";
    //    cout << '\n';
    //}
    //cout << '\n';
    dp[2][n][n+1]=1;
    for(int i=n; i>=1; i--){
        for(int j=n; j>=1; j--){
            if(!a[i][j]) dp[2][i][j]=0;
            else dp[2][i][j]=dp[2][i+1][j]+dp[2][i][j+1];
            dp[2][i][j]%=mod;
        }
    }
    //for(int i=1; i<=n; i++){
    //    for(int j=1; j<=n; j++) cout << dp[2][i][j] << " ";
    //    cout << '\n';
    //}
    //cout << '\n';
    dp[3][1][n+1]=1;
    for(int i=1; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(!a[i][j]) dp[3][i][j]=0;
            else dp[3][i][j]=dp[3][i-1][j]+dp[3][i][j+1];
            dp[3][i][j]%=mod;
        }
    }
    //for(int i=1; i<=n; i++){
    //    for(int j=1; j<=n; j++) cout << dp[3][i][j] << " ";
    //    cout << '\n';
    //}
    //cout << '\n';
    ll ans=0;
    for(int i=2; i<n; i++){
        for(int j=2; j<n; j++){
            if(a[i][j]){
                ll UD1 = dp[0][i-1][j]*dp[2][i+1][j], LR1 = dp[1][i][j-1]*dp[3][i][j+1];
                ll LR2 = dp[0][i][j-1]*dp[2][i][j+1], UD2 = dp[1][i+1][j]*dp[3][i-1][j];
                UD1%=mod;
                LR1%=mod;
                UD2%=mod;
                LR2%=mod;
                ans+=(UD1*LR1)%mod+(UD2*LR2)%mod;
                ans%=mod;
                //cout << i << " " << j << " " << dp[0][i-1][j]  << " " << dp[2][i+1][j] << " " << dp[1][i][j-1] << " " << dp[3][i][j+1];
            }
        }
    }
    cout << ans;
}
/*
4
1111
1011
1111
1011
*/