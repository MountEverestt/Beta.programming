#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
const int N=1502, mod=1e9+7;
int n, m, a[N], L, R, dp[N][N], ans[N], sumL, sumR;
set<pair<int,int>>l,r;
void mid(int i){
    if(L>R){
        if((*l.rbegin()).st<=a[i]){
            r.insert({a[i],i});
            sumR+=a[i];
        }
        else{
            sumR+=(*l.rbegin()).st;
            sumL-=(*l.rbegin()).st;
            sumL+=a[i];
            r.insert({(*l.rbegin())});
            l.erase((*l.rbegin()));
            l.insert({a[i],i});
            
        }
        R++;
    }
    else{
        if(a[i]<=(*r.begin()).st){
            l.insert({a[i],i});
            sumL+=a[i];
        }
        else{
            sumL+=(*r.begin()).st;
            sumR-=(*r.begin()).st;
            sumR+=a[i];
            l.insert({(*r.begin())});
            r.erase((*r.begin()));
            r.insert({a[i],i});
            
        }
        L++;
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        dp[i][i]=0;
    }
    for(int i=1; i<n; i++){
        l.insert({a[i],i});
        L=1, R=0, sumL=a[i], sumR=0;
        for(int j=i+1; j<=n; j++){
            mid(j);
            dp[i][j]=abs((*l.rbegin()).st*L-sumL)+abs(sumR-(*l.rbegin()).st*R);
            //cout << i << " " << j << " " << (*l.rbegin()).st << " " << qs[j] << " " << qs[i-1] << '\n';
        }
        ans[i]=15e8;
        l.clear();
        r.clear();
    }
    //for(int i=1; i<n; i++){
    //    for(int j=i+1; j<=n; j++) cout << i << " " << j << " " << dp[i][j] << '\n';
    //    cout << '\n';
    //}
    ans[n]=15e8;
    for(int k=1; k<=m; k++){//divided
        for(int j=n; j>=1; j--){
            for(int i=1; i<=j; i++){
                ans[j]=min(ans[j],ans[i-1]+dp[i][j]);
                //cout << j << " " << ans[j] << '\n';
            }
        }
    }
    cout << ans[n];
}
/*
7 3
6 4 6 12 13 9 7
*/