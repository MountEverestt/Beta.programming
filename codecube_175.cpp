#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
int qs[100002];
int main(){
	string a;
	int n, m;
	cin >> n >> m;
	a=string(3,0);
	for(int i=1; i<=n ;i++){
		cin >> a;
		if(a=="UR") qs[i]=1;
		qs[i]+=qs[i-1];
	}
	int maxx=0;
	for(int i=m; i<=n; i++){
		maxx=max(maxx,qs[i]-qs[i-m]);
	}
	cout << maxx;
}