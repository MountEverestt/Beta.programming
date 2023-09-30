#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int N=1e6+1, mod=1e9+7;
ll n, m, x, ma[N];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    ll cou=0;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> x;
        ma[x]++;
    }
    if(m%2==0){
        cou+=(ll)ma[m/2]*(ma[m/2]-1)/2;
        //cout << cou << '\n';
    }
    for(int i=0; i<(m+1)/2; i++){
        cou+=(ll)ma[i]*ma[m-i];
    }
    cout << cou;
}