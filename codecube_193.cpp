#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
vec<pair<int,int>>v;
priority_queue<pair<ll,int>>pq;//c,x
int main(){
    int n, m, x, c;
    ll ans=0;
    cin >> n >> m;
    for(int i=0 ;i<n; i++){
        cin >> x >> c;
        v.push_back({x,c});
    }
    sort(v.begin(),v.end());
    for(auto [x,c] : v){
        while(!pq.empty() && x-pq.top().nd>m) pq.pop();
        ll maxx=ans;
        if(!pq.empty()){
            ans=max(ans,pq.top().st-x+c);
        }
        pq.push({maxx+x+c,x});
    }
    cout << ans;
}