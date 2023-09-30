#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=1e8+2, mod=1e9+7;
ll t, n;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> t;
    while(t--){
        ll nub=-1, calc=-1;
        cin >> n;
        for(ll i=2+(n&1); i*i<=n; i+=2){
            nub=1, calc=i;
            while(calc<n){
                calc*=i;
                nub++;
            }
            if(calc==n){
                cout << nub << '\n';
                break;
            }
        }
        if(calc^n) cout << "NO\n" ;
    }
    
}
/*
5
1000000
994009
20
59050
524288
*/