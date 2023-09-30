#include<bits/stdc++.h>
#define st first
#define nd second
#define ull unsigned long long
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int mod = 1e9+7, N=7e3+2;
int n, m, dp[N][N];
char c;
int qs[N];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> c;
            if(c=='1'){
                dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
                qs[dp[i][j]]++;
            }
        }
    }
    for(int i=min(n,m); i>=1; i--){
        qs[i]+=qs[i+1];
    }
    for(int i=1; i<=(n,m); i++) cout << qs[i] << '\n';
}
/*
5 5
11001
11111
00111
01111
01101
*/