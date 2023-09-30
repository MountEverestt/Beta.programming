#include<bits/stdc++.h>
#define st first
#define nd second
#define vec vector
#define umap unordered_map
#define ll long long
using namespace std;
int a[103], dp[103][103];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int x, n=5;
    cin >> x;
    for(int i=1; i<=n; i++) cin >> a[i];
    int sum=accumulate(a+1,a+1+n,0);
    int s=sum-x;
    if(s<0){
        cout << -1;
        return 0;
    }
    if(sum==x){
        for(int i=1; i<=n; i++) cout << a[i] << " ";
        return 0;
    }
    bool check=true;
    for(int i=1; i<=n; i++){
        if(a[i]==s){
            check=false;
            for(int j=1; j<=n ;j++){
                if(i!=j) cout << a[j] << " ";
                else cout << 0 << " ";
            }
            return 0;
        }
    }
    if(check) cout << -1;
}
