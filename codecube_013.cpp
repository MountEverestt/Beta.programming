#include<bits/stdc++.h>
#define st first
#define nd second
#define ull unsigned long long
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int N=1e3, mod=1e9+7;
int n, m, a[N];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);  
    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> a[i];
    int l=0, r=2e6;
    while(l<r){
        int mid = (l+r)>>1, sum=0, nub=1;
        for(int i=0; i<n; i++){
            if(mid<a[i]){
                nub=m+1;
                break;
            }
            if(sum+a[i]>mid){
                sum=0;
                nub++;
            }
            sum+=a[i];
        }
        //cout << mid << " " << nub << '\n';
        if(nub>m) l=mid+1;
        else r=mid;
    }
    cout << l;
}
/*
*/