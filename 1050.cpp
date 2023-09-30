#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
#define endl '\n'
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n, m;
	cin >> n >> m;
	map<vec<int>,int>ma;
	vec<int>a(m);
	for(int i=0; i<n; i++){		
		int x;		
		for(int j=0; j<m; j++){
			cin >> a[j];
		}
		ma[a]=i+1;
	}
	vec<int>ans(m);
	int x;
	for(int j=0; j<m; j++){
		cin >> ans[j];
	}
	if(ma[ans]!=0){
		cout << ma[ans];
		return 0;
	}
	for(auto k : ma){
		a=ans;
		for(int i=0; i<m; i++){
			a[i]-=k.st[i];
		}
		if(a==k.st) continue;
		if(ma[a]!=0){
			int ans1 = k.nd;//save memmory
 		    int ans2 = ma[a];
            if (ans1 > ans2) {
       			swap(ans1, ans2);
      		}
      		cout << ans1 << " " << ans2 ;
     		return 0;
		}
	}
	cout << "NO";
	return 0;
}