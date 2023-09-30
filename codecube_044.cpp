#include<bits/stdc++.h>
#define st first
#define nd second
#define ull unsigned long long
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int mod = 1e9+7, N=1e6+3;
int n, x, dpl[N], dpr[N], a[N];
deque<pair<int,int>>dq;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> a[1];
    dq.push_back({a[1],1});
    dpl[1]=1;
    for(int i=2; i<=n; i++){
        cin >> a[i];
        while(!dq.empty() && dq.back().st<=a[i]) dq.pop_back();
        if(!dq.empty()) dpl[i]=dq.back().nd+1;
        else dpl[i]=1;
        dq.push_back({a[i],i});
    }
    //for(int i=1; i<=n; i++) cout << dpl[i] << " ";
    while(!dq.empty()) dq.pop_back();
    dq.push_back({a[n],n});
    dpr[n]=n;
    for(int i=n-1; i>=1; i--){
        while(!dq.empty() && dq.back().st<=a[i]) dq.pop_back();
        if(!dq.empty()) dpr[i]=dq.back().nd-1;
        else dpr[i]=n;
        dq.push_back({a[i],i});
    }
    for(int i=1; i<=n ;i++){
        cout << dpr[i]-dpl[i]+1 << " ";
    }
}
/*
8
1 4 2 3 2 3 1 10
*/