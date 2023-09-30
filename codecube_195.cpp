#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
vec<int>v;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n, m, x;
    cin >> n >> m;
    for(int i=1; i<=n ;i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++) v[i]-=i;
    for(int i=1; i<=m; i++){
        cin >> x;
        auto idx = upper_bound(v.begin(),v.end(),x)-v.begin();
        cout << x+idx << " ";
    }
}
