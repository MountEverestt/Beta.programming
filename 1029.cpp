#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=2e3+1, mod=1e9+7;
int n, t, d, l, m;
set<int>s;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m >> t;
    for(int i=0; i<m; i++){
        cin >> l >> d;
        if(s.find(l)==s.end()){
            s.insert(l);
        }
        else s.erase(l);
        if(s.find(l+d)==s.end()){
            s.insert(l+d);
        }
        else s.erase(l+d);
    }
    s.insert(1);
    s.insert(n+1);
    
    while(t--){
        int x;
        cin >> x;
        auto idx = s.upper_bound(x);
        cout << (*idx)-(*--idx) << '\n';
    }
}
/*
*/