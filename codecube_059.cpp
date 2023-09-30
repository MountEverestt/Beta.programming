#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=5e3+5, mod=1e9+7;
int n, m;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m;
    char c='A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout << c;
            c++;
            if(c>'Z') c='A';
        }
        cout << '\n';
    }
}
/*
2 1
0 1
4 4
0 1
1 2
2 3
3 0
5 5
0 1
1 2
0 3
3 4
3 1
0 0
*/