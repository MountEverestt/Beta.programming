#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=2e3+1, mod=1e9+7;
int n, t, r, l, m;
map<int,int>dp;
ll ans[4];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m;
    dp[1]=0, dp[n+1]=0;
    for(int i=0; i<m; i++){
        cin >> l >> r;
        dp[l]++, dp[r+1]--;
    }
    int last=0;
    ll sum=0;
    for(auto k : dp){
        if(last){
            ans[sum%3]+=k.st-last;
        }
        //else ans[0]=k.st;
        sum+=k.nd;
        last=k.st;
    }
    char c;
    cin >> c;
    if(c=='R') cout << ans[1]*2+ans[2];
    else if(c=='G') cout << ans[2]*2+ans[0];
    else cout << ans[0]*2+ans[1]*1;
}
/*
3 2
1 2
2 3
B
*/