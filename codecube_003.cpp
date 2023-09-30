#include<bits/stdc++.h>
#define st first
#define nd second
#define ull unsigned long long
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int N=8e4+1, mod=1e9+7;
ll a, b;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);  
    cin >> a >> b;
    cout << (ll)(a*b)/__gcd(a,b);
}
/*
*/