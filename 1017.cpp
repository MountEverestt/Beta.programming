#include<bits/stdc++.h>
#define ll long long
#define vec vector
#define st first
#define nd second
using namespace std;
const int N=102, mod=1e9+7;
int a[N][N], n, x, sumx[N], sumy[N], mem[N];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n;
    int ch=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            x = a[i][j];
            if(ch) continue;
            if(mem[x]){
                ch=1;
                continue;
            }
            mem[x]=1;
            sumx[i]+=x;
            sumy[j]+=x;
        }
    }
    if(ch){
        cout << "No";
        return 0;
    }
    int p=sumx[1];
    for(int i=1; i<=n; i++){
        if(sumx[i]!=p || sumy[i]!=p){
            cout << "No";
            return 0;
        }
    }
    int sumt1=0, sumt2=0;
    for(int i=1; i<=n; i++){
        sumt1+=a[i][i];
    }
    for(int i=1; i<=n; i++){
        sumt2+=a[i][n-i+1];
    }
    if(p!=sumt1 || p!=sumt2){
        cout << "No";
    }
    else cout << "Yes";
}
