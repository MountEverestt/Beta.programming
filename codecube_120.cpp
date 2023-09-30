#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int N=1e6+1, mod=1e9+7;
int dp[N], a[11], p[N], coin[11], l, r, n;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> l >> r >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=1; i<=r; i++){
        dp[i]=2e9;
        for(int j=0; j<n; j++){
            if(i>=a[j]){
                if(dp[i]>dp[i-a[j]]+1){
                    dp[i]=dp[i-a[j]]+1;
                    p[i]=j;
                }
            }
        }
    }
    int minn=2e9, idx;
    for(int i=l; i<=r; i++){
        if(dp[i]+dp[i-l]<minn){
            minn=dp[i]+dp[i-l];
            idx=i;
        }
    }
    cout << dp[idx] << " " << dp[idx-l] << '\n';
    int now=idx;
    while(now){
        coin[p[now]]++;
        now-=a[p[now]];
    }
    for(int i=0; i<n; i++){
        cout << coin[i] << " ";
        coin[i]=0;
    }
    cout << '\n';
    now=idx-l;
    while(now){
        coin[p[now]]++;
        now-=a[p[now]];
    }
    for(int i=0; i<n; i++){
        cout << coin[i] << " ";
    }
}
/*
*/
