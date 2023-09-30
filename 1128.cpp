#include<bits/stdc++.h>
#define st first
#define nd second
#define ull unsigned long long
#define vec vector
using namespace std;
const int N=1e6+1, mod=2553;
ull n, a[N], fi[N];
ull ans=0;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n;
   ull p=1, mem=2;
    for(int i=0; i<n; i++){
        cin >> a[i];
        fi[i]=p;
        p+=mem;
        mem++;
    }
    for(int i=0 ;i<n; i++){
        ans+=(ull)fi[n-i-1]*a[i];
        ans%=mod;
    }
    cout << ans;
}