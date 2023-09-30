#include<bits/stdc++.h>
#define st first
#define ll long long
#define nd second
#define vec vector
#define umap unordered_map
using namespace std;
int a[25][25], n, m, t[25], ans=20;
void rec(int x){
	if(x==m){
		int s=0;
		for(int i=0; i<n; i++){
			bool check=false;
			for(int j=0; j<m; j++){
				if(a[i][j]==0) continue;
				if(a[i][j]!=t[j]){
					check=true;
					break;
				}
			}
			if(check) s++;
		}
		ans=min(ans,s);
		return ;
	}
	t[x]=-1;
	rec(x+1);
	t[x]=1;
	rec(x+1);
}
int main(){
	cin >> n >> m;
	for(int i=0; i<n ;i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	rec(0);
	cout << ans;
}
