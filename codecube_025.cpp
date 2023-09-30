#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int N=601, mod=1e9+7;
ll dp[N][N], n, qs[N];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> qs[i];
        qs[i]+=qs[i-1];
    }
    for(int k=1; k<n; k++){
        for(int i=1; i+k<=n; i++){
            int l=i, r=i+k;
            for(int j=l; j<r; j++){
                ll sum=dp[l][j]+dp[j+1][r], sumL=qs[j]-qs[l-1], sumR=qs[r]-qs[j];
                dp[l][r]=max(dp[l][r],2*min(sumL,sumR)+max(sumL,sumR)+sum);
            }
        }
    }
    cout << dp[1][n];
}