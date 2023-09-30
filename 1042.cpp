#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
#define endl '\n'
#define pii pair<int,int>
#define ar array
using namespace std;
int xx[5001], xy[5001];
int main(){
	int n ,m, k, x, y, r;
	cin >> n >> m >> k;
	for(int l=1; l<=k; l++){
		cin >> x >> y >> r;
		for(int i=x-r; i<=x+r; i++){
			if(i>n) break;
			if(i<0) continue;
			xx[i]++;
		}
		for(int j=y-r; j<=y+r; j++){
			if(j>m) break;
			if(j<0) continue;
			xy[j]++;
		}	
	}
	cout << max(*max_element(xx,xx+n),*max_element(xy,xy+m));
}