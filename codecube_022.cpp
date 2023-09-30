#include <bits/stdc++.h>
using namespace std;
int x[1005][1005];
int main(){
    int i,j,num,ans = 0,a,b;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d %d",&a,&b);
        if(x[a][b] == 0){
            ans++;
            x[a][b]++;
        }
    }
    printf("%d",ans);
    return 0;
}