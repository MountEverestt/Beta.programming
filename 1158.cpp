#include <bits/stdc++.h>
using namespace std;
int qs[1005][1005];
int main(){
    int n,m,k;
    scanf(" %d %d %d",&n,&m,&k);
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            scanf(" %d",&qs[i][j]);
            qs[i][j] += qs[i-1][j] + qs[i][j-1] - qs[i-1][j-1];
        }
    }
    int ans=0,nub;
    for(int i = k;i<=n;i++){
        for(int j = k;j<=m;j++){
            nub = qs[i][j] - qs[i-k][j] - qs[i][j-k] + qs[i-k][j-k];
            ans = max(ans,nub);
        }
    }
    printf("%d",ans);
}
