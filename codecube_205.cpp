#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
double qs[10004];
int main(){
    int n, m;
    cin >> n >> m;
    for(int i=1; i<=n ;i++){
        cin >> qs[i];
        qs[i]+=qs[i-1];
    }
    cout << n-m+1 << '\n';
    for(int i=m; i<=n; i++){
        printf("%.6lf ", (qs[i]-qs[i-m])/m);
    }
}
