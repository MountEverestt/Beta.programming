#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=1e6+9;
ll n, ans=0, x, p;
map<int,ll>ma;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        ma[x]++;
    }
    cin >> p;
    for(int i=0; i<=(p-1)/2; i++){
        ans+=(ll)(ma[i]*ma[p-i]);
    }
    if(!(p&1)){
        ans+=(ll)((ma[p/2]*(ma[p/2]-1))/2);
    }
    cout << ans;
}