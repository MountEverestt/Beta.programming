#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
int a[22][22];
queue<pair<int,pair<int,int>>>q;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n, xi, yi;
    cin >> n >> yi >> xi;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    int maxx=a[xi][yi];
    q.push({a[xi][yi],{xi,yi}});
    int xx[]={0,0,-1,1};
    int xy[]={-1,1,0,0};
    while(!q.empty()){
        int tem= q.front().st;
        int x = q.front().nd.st;
        int y = q.front().nd.nd;
        maxx=max(maxx,tem);
        q.pop();
        for(int i=0; i<4; i++){
            int nx = x+xx[i];
            int ny = y+xy[i];
            if(nx>n || ny>n || nx<1 || ny<1 || a[nx][ny]==100 || a[nx][ny]<=tem) continue;
            q.push({a[nx][ny],{nx,ny}});
            a[nx][ny]=100;
        }
    }
    cout << maxx;
}
