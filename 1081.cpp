#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=5e2+3;
int n;
vec<int>v[5];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int x;
            cin >> x;
            if((i&1) && (j&1)) v[0].push_back(x);
            else if((i&1) && !(j&1)) v[1].push_back(x);
            else if(!(i&1) && !(j&1)) v[2].push_back(x);
            else v[3].push_back(x);
        }
    }   
    ll ans=0;
    for(int i=0; i<4; i++) sort(v[i].begin(),v[i].end());
    for(int i=0; i<(n*n)/4; i++){
        ll calc=1;
        for(int j=0; j<4; j++){
            calc*=v[j][i];
        }
        ans+=calc;
    } 
    cout << ans;
}