#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=1e6+9;
int n, x, y;
vec<pair<double,double>>v;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        v.push_back({y,x});
    }
    sort(v.begin(),v.end());
    double sum=v[0].nd;
    ll a=v[0].nd, b=v[0].st;
    double ans=sum/v[0].st;
    for(int i=1; i<n; i++){
        sum+=v[i].nd;
        if(ans<sum/v[i].st){
            ans=sum/v[i].st;
            a=sum;
            b=v[i].st;
        }
    }
    cout << a << " " << b;
}