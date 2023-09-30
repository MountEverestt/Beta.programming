#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int MOD = 1e6+7;
int dp[50005];
int main(){
    int n, m, x;
    cin >> n >> m;
    dp[0]=1;
    for(int i=1; i<=n; i++){
        cin >> x;
        for(int j=m; j>=x; j--){
            dp[j]+=dp[j-x];
            dp[j]%=MOD;
        }
     //   for(int i=0 ;i<=m; i++) cout << dp[i] << " ";
     //   cout << '\n';
    }
    cout << dp[m];
}
//learn tomoriru