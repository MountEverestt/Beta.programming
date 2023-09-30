#include<bits/stdc++.h>
#define st first
#define nd second
#define umap unorderd_map
#define vec vector
#define ll long long
using namespace std;
int a[1000006];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n;
    cin >> n;
    ll sum=0;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=1; i<n; i++){
        if(a[i]>a[i-1]) sum+=(a[i]-a[i-1]);
    }
    cout << sum;
}
