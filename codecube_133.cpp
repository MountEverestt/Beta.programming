#include<bits/stdc++.h>
#define st first
#define nd second
#define umap unorderd_map
#define vec vector
#define ll long long
using namespace std;
int main(){
    int n, t, k, x, y, i, j, minn;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &k);
        pair<int,int>v[n];
        for(i=0; i<n; i++) scanf("%d%d", &v[i].nd, &v[i].st);
        sort(v,v+n);
        minn=1e9;
        for(i=0; i<n; i++){
            for(j=0; j<i ;j++){
                if(abs(v[j].st-v[i].st)<k) break;
                minn=min(minn,abs(v[j].nd-v[i].nd));
             //   cout << abs(v[j].nd-v[i].nd) << '\n';
            }
        }
        if(minn!=1e9) printf("%d\n", minn);
        else printf("-1\n");
    }
    return 0;
}
/*
1
5 10
1 3
3 7
4 5
5 13
8 2
*/