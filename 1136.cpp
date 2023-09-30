#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int N=1e6+2, mod=1e9+7;
int n, m;
double m1, m2, x;
vec<double>a, b;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> x;
        m1+=x;
        a.push_back(x);
    }
    for(int i=0; i<m; i++){
        cin >> x;
        m2+=x;
        b.push_back(x);
    }
    m1/=n;
    m2/=m;
    int ans=0, na=n, nb=m;
    //cout << m1 << " " << m2 << '\n';
     if(m1>m2){
        for(int i=0; i<n; i++){
            if(a[i]<m1 && a[i]>m2 && na-1>=1){
                m1 = (na*m1-a[i])/(na-1);
                m2 = (nb*m2+a[i])/(nb+1);
                
                ans++;
                na--;
                nb++;
            }
        }
    }
    else{
        //cout << n << " " << m << '\n';
        for(int i=0; i<m; i++){
            //cout << b[i] << " "  << m1 << " " << m2 << '\n';
            if(b[i]<m2 && b[i]>m1 && nb-1>=1){
                m1 = (na*m1+b[i])/(na+1);
                m2 = (nb*m2-b[i])/(nb-1);
                ans++;
                na++;
                nb--;
                
            }
        }
    }
    cout << ans;
}
/*
2 5
3 5
4 6 10 15 20
*/