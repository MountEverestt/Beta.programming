#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=3e2+4, mod=1e9+7;
int n, m, k, x, qsr[3][N][N], qsc[3][N][N];
int main(){      
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m >> k;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> x;
            if(i&1){
                qsr[1][i][j]=qsr[1][max(0,i-2)][j]+x;
                qsr[0][i][j]=qsr[0][i-1][j];
            }
            else{
                qsr[0][i][j]=qsr[0][max(0,i-2)][j]+x;
                qsr[1][i][j]=qsr[1][i-1][j];
            }
            if(j&1){
                qsc[1][i][j]=qsc[1][i][max(0,j-2)]+x;
                qsc[0][i][j]=qsc[0][i][j-1];
            }
            else{
                qsc[0][i][j]=qsc[0][i][max(0,j-2)]+x;
                qsc[1][i][j]=qsc[1][i][j-1];
            }
             
        }
    }
    int ans=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            int x, y, rmx=min(i+k,n), rmn=max(i-k-1,0), cmx=min(j+k,m), cmn=max(j-k-1,0);
            if(i&1){
                x=(qsr[1][rmx][j]-qsr[1][rmn][j])-(qsr[0][rmx][j]-qsr[0][rmn][j]);
            }
            else x=(qsr[0][rmx][j]-qsr[0][rmn][j])-(qsr[1][rmx][j]-qsr[1][rmn][j]);
            if(j&1){
                y=(qsc[1][i][cmx]-qsc[1][i][cmn])-(qsc[0][i][cmx]-qsc[0][i][cmn]);
            }
            else y=(qsc[0][i][cmx]-qsc[0][i][cmn])-(qsc[1][i][cmx]-qsc[1][i][cmn]);
            ans=max(ans,x+y-(qsr[i&1][i][j]-qsr[i&1][max(0,i-2)][j]));
            //cout << i << " " << j << " " << x << " " << y << '\n';
        }
    }
    cout << ans;
}
/*
5 4 2
2 2 3 5
3 2 4 0
5 3 1 2
0 2 0 1
3 2 1 5
*/