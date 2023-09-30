#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
int ans[21], a[101], non[101];
int main(){
	int n, m, x;
	cin >> n >> m;
	for(int i=0; i<n; i++) cin >> a[i];
	int now=0;
	for(int i=0; i<n; i++){
		cin >> x;
		for(int j=0; j<=x; j++){
			if(non[now%n]) j--;
			now++;
		}
		now--;
		ans[i%m]+=a[now%n];
		non[now%n]=1;
	}
	for(int i=0; i<m; i++) cout << ans[i] << '\n';
}
