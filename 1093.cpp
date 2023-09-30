#include<bits/stdc++.h>
#define ll long long
#define vec vector
#define st first
#define nd second
using namespace std;
int dp[2002][2002];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        dp[i][0]=max(dp[i-1][0],dp[i-1][2]-x);
        for(int j=1; j<=i; j++){
            dp[i][j]=max(dp[i-1][j-1]+x,dp[i-1][j+2]-x);
        }
    }
    cout << dp[n][0];
}
/*
3 4
1 6 2 5
4 21 63 72
19 9 18 3
*/
