#include <bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
int a[300005], mem[100005];
ll qsd[300005];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n;
    cin >> n;
    for(int i=n+1; i<=2*n; i++) cin >> a[i];
    for(int i=n+1; i<=2*n; i++) cin >> qsd[i];
    for(int i=1; i<=n ;i++) qsd[i]=qsd[n+i];
    for(int i=2*n+1; i<=3*n; i++) qsd[i]=qsd[i-n];
    for(int i=1; i<=3*n; i++) qsd[i]+=qsd[i-1];
//    for(int i=1; i<=3*n; i++) cout << qsd[i] << " " ;
    for(int i=n+1; i<=2*n; i++){
        int s=0, e=(n-1)>>1;
        int maxx=0;
       // cout << i << '\n';
        while(s<=e){
             //  cout << 1;
            int mid=(s+e)>>1;
            int defend=qsd[i+mid]-qsd[i-mid-1]-(qsd[i]-qsd[i-1]);
           // cout << s << " " << e << " " << mid << " " << defend << '\n';
            if(defend<=a[i]){
                maxx=max(maxx,2*mid);
                s=mid+1;
            }
            else e=mid-1;
        }
        mem[i-n]=maxx;
    }
    for(int i=1; i<=n; i++) cout << mem[i] << " ";
}