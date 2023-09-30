#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=5e3+5, mod=1e9+7;
int n, l ,r;
struct DATA{
    int x;
    bool operator < (const DATA & d2) const{
        return x > d2.x;
    }
};
priority_queue<DATA>pq;
vec<pair<int,int>>v;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> l >> r;
        v.push_back({l,r});
    }
    sort(v.begin(),v.end());
    int maxx=0;
    for(int i=0; i<n; i++){
        while(!pq.empty() && pq.top().x<=v[i].st) pq.pop();
        pq.push({v[i].nd});
        maxx=max(maxx,(int)pq.size());
    }
    cout << maxx;
}
/*
2 1
0 1
4 4
0 1
1 2
2 3
3 0
5 5
0 1
1 2
0 3
3 4
3 1
0 0
*/