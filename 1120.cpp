#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
ll dp[1000006];
int main(){
    for(int i=1; i<=1000000; i++){
        for(int j=i*2; j<=1000000; j+=i) dp[j]++;
        dp[i]++;
    }
 //   cout << dp[16];
    int t, s ,e ,d;
    cin >> t;
    while(t--){
        int k=0;
        cin >> s >> e >> d;
        for(int i=s; i<=e; i++){
            if(dp[i]==d) k++;
        }
        cout << k << '\n';
    }
}