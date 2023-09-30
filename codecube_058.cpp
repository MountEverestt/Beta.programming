#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=3e2+5, mod=1e9+7;
int n, m, t, dis[3][N][N], x, y;
string a[N];
int xx[2][4]={{0,-1,0,1},{1,1,-1,-1}};
int xy[2][4]={{-1,0,1,0},{1,-1,-1,1}};
struct DATA{
    int x, y, w, p;
    bool operator < (const DATA & d2) const{
        return w > d2.w;
    }
};
priority_queue<DATA>pq;
void bfs(int idx){
    while(!pq.empty()){
        int x = pq.top().x;
        int y = pq.top().y;
        int w = pq.top().w;
        int p = pq.top().p;
        pq.pop();
        if(dis[idx][x][y]<w) continue;
        //cout << x << " " << y << " " << w << " " << p << '\n';
        for(int i=0; i<4; i++){
            int nx = x+xx[idx][i];
            int ny = y+xy[idx][i];
            if(nx>=n || ny>=m || nx<0 || ny<0 || a[nx][ny]=='#' || (p^2)==i) continue;
            int nw=i==p?w:w+1;
            if(dis[idx][nx][ny]>=nw){
                dis[idx][nx][ny]=nw;
                pq.push({nx,ny,nw,i});
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m >> t;
    int xs, ys;
    for(int i=0; i<n; i++){
        a[i]=string(m,0);
        cin >> a[i];
        for(int j=0; j<m; j++){
            if(a[i][j]=='J'){
                xs=i, ys=j;
                break;
            }
        }
    }
    for(int i=0; i<n ;i++){
        for(int j=0; j<m; j++) dis[0][i][j]=dis[1][i][j]=2e9;
    }
    for(int i=0; i<4; i++){
        int nx = xs+xx[0][i];
        int ny = ys+xy[0][i];
        if(nx>=n || ny>=m || nx<0 || ny<0 || a[nx][ny]=='#') continue;
        pq.push({nx,ny,0,i});
        dis[0][nx][ny]=0;
    }
    //cout << 0 << '\n';
    bfs(0);
    for(int i=0; i<4; i++){
        int nx = xs+xx[1][i];
        int ny = ys+xy[1][i];
        if(nx>=n || ny>=m || nx<0 || ny<0 || a[nx][ny]=='#') continue;
        pq.push({nx,ny,0,i});
        dis[1][nx][ny]=0;
    }
    //cout << 1 << '\n';
    bfs(1);
    while(t--){
        cin >> x >> y;
        x--, y--;
        int ans = min(dis[0][x][y],dis[1][x][y]);
        cout << (ans==2e9?-1:ans) << '\n';
    }
}
/*
4 10 2
..........
##X#######
...X..#..J
.......#.#
3 4
2 3
4 10 1
#.X.......
.#.#.#.#..
..#.#.#.#J
...#.#.#.#
1 3
*/