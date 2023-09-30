#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
#define endl '\n'
using namespace std;
int a[2019], ma[4002];
int main(){
	int n;
	cin >> n;
	for(int i=1; i<=n ;i++){
		cin >> a[i];
		ma[a[i]]++;
	}
	int minn=4000, mem=-1;
	for(int i=1; i<=n ;i++){
		if(ma[a[i]]>1) continue;
		if(abs(a[i]-2017)<minn){
			minn=abs(a[i]-2017);
			mem=a[i];
		} 
	}
	cout << mem;
}
