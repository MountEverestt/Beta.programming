#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
#define endl '\n'
using namespace std;
int t[50003], a[3][50003], qs[50003];
//umap<int,int>ma;
int main(){
	int x, n, m;
	cin >> n >> m;
	for(int i=1; i<=n ;i++){
		cin >> a[0][i] >> a[1][i];
	}
//	for(int i=1; i<=n ;i++) cout << a[(t[i]+1)%2][i] << " ";
//	cout << '\n';
	for(int i=1; i<=m; i++){
		cin >> x;
		for(int j=1; j<=n; j++){
			if(a[t[j]%2][j]<=x) t[j]++; 
		}
	//	for(int j=1; j<=n ;j++) cout << a[(t[j])%2][j] << " ";
	//	cout << '\n';
	}
	
	for(int i=1; i<=n ;i++){
		cout << a[t[i]%2][i] << '\n';
	}
}