#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
//vec<int>v[1005];
int qs[1001][1001];
int main(){
	int n, m, x, y, r;
	scanf("%d%d", &n, &m);
	for(int i=0; i<n; i++){
		scanf("%d%d", &x, &y);
		qs[x][y]++;
	//	v[a[i]].push_back(y);
	}
	for(int i=1; i<=1000; i++){//i>=1->i-1>=0
		for(int j=0; j<=1000; j++) qs[i][j]+=qs[i-1][j];
	}
	for(int i=0; i<=1000; i++){//j>=1->j-1>=0
		for(int j=1; j<=1000; j++) qs[i][j]+=qs[i][j-1];
	}
//	for(int i=0; i<=10; i++){
//		for(int j=0; j<=10; j++) cout << qs[i][j] << " ";
//		cout << '\n';
//	}
	while(m--){
		scanf("%d%d%d", &x, &y, &r);
		int x1=max(0,x-r), x2=min(1000,x+r), y1=max(0,y-r), y2=min(1000,y+r);
		int ans=qs[x2][y2];
		if(x1>0) ans-=qs[x1-1][y2];
		if(y1>0) ans-=qs[x2][y1-1];
		if(x1>0 && y1>0) ans+=qs[x1-1][y1-1]; 
		printf("%d\n", ans);
	}
/*overload memmory
	sort(a,a+n);
	for(int i=0; i<=1000; i++){
		if(v[i].empty()) continue;
		sort(v[i].begin(),v[i].end());
	}
	while(m--){
		int s=0;
		cin >> x >> y >> r;
		int x1 = lower_bound(a,a+n,x-r)-a;
		int x2 = upper_bound(a,a+n,x+r)-a-1;
		for(int i=a[x1]; i<=a[x2]; i++){
			if(v[i].empty()) continue;
			int y1 = lower_bound(v[i].begin(),v[i].end(),y-r)-v[i].begin();
			int y2 = upper_bound(v[i].begin(),v[i].end(),y+r)-v[i].begin()-1;
			s+=y2-y1+1;
		//	cout << i << ' ' << y1 << " " << y2 << '\n';
		}
	//	cout << '\n';
		cout << x1 << " " << x2 << " " << s << '\n';
	}*/
}