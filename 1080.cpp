#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=3e4+9;
int n;
vec<int>v;
int dp[N];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        int x; 
        cin >> x;
        v.push_back(x);
    }
    if(n<3){
        cout << n;
        return 0;
    }
    int j=0, ans=0;
    sort(v.begin(),v.end());
    for(int i=0; i<n-2; i++){
        while(j<n && v[i]+v[i+1]>v[j]){
            j++;
        }
        ans=max(ans,j-i);
        //cout << i << " " << j << '\n';
        if(j==n){
            cout << ans;
            return 0;
        }
    }
    cout << 0;
}