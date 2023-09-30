#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
vec<ll>v;
int main(){
    ll n, x, y;
    ll sum=0, maxx=LONG_MIN;
    cin >> n;
    for(int i=1; i<=n ;i++){
        cin >> x >> y;
        v.push_back(y-2*x);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0 ;i<n; i++){
        sum+=v[i];
        if(maxx<sum-(n-i-1)*(n-i-1)){
            maxx=sum-(n-i-1)*(n-i-1);
        }
    }
    cout << maxx;
}