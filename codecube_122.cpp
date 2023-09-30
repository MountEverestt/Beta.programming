#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=5e2+2, mod=1e9+7;
int n, m, vis[8][N][N];
string a[N];
struct DATA{
    int x, y, p, t;
};
queue<DATA>q;
map<char,int>ma;
int xx[]={0,0,-1,1};
int xy[]={-1,1,0,0};
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m;
    for(int i=0; i<n; i++){
        a[i]=string(m,0);
        cin >> a[i];
        for(int j=0; j<m; j++){
            if(a[i][j]=='S'){
                q.push({i,j,0,0});
                break;
            }
        }
    }
    ma['j']=1;
    ma['b']=2;
    ma['p']=4;
    /*while(!q.empty()){
        int x = q.front().x;
        int y = q.front().y;
        int p = q.front().p;
        int t = q.front().t;
        q.pop();
        cout << x << " " << y << " " << p << " " << t << '\n';
    }*/
    while(!q.empty()){
        int x = q.front().x;
        int y = q.front().y;
        int p = q.front().p;
        int t = q.front().t;
        q.pop();
        if(a[x][y]=='E'){
            cout << t;
            return 0;
        }
        if(vis[p][x][y]) continue;
        vis[p][x][y]=1;
//        cout << x << " " << y << " " << p << " " << t << '\n';
        for(int i=0; i<4; i++){
            int nx = x+xx[i];
            int ny = y+xy[i];
            if(nx>=n || ny>=m || nx<0 || ny<0 || a[nx][ny]=='#') continue;
            
           if(a[nx][ny]=='J' || a[nx][ny]=='B' || a[nx][ny]=='P'){
				if((ma[a[nx][ny]-'A'+'a'] & p)){
					q.push({nx,ny,p,t+1});
				}
			}
            else if(a[nx][ny]>'a' && a[nx][ny]<'z') q.push({nx,ny,p|ma[a[nx][ny]],t+1});
            else q.push({nx,ny,p,t+1});
        }
    }
    cout << -1;
}
/*
2 5
S.J.b
.jB.E
*/