#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
#define endl '\n'
using namespace std;
int a[1000002], b[1000002];
int main(){
	int n;
	cin >> n;
	for(int i=1; i<=n ;i++){
		cin >> a[i];
		b[i]=a[i];
	}
	for(int i=2; i<=n; i++) a[i]=max(a[i],a[i-1]);
	for(int i=n-1; i>=1; i--) b[i]=max(b[i],b[i+1]);
	for(int i=1; i<n; i++) cout << min(a[i],b[i+1]) << " ";
}
