#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
using namespace std;
vector<pair<int,int>>v;
int main(){
	int n, s, maxx=0, minn=INT_MAX, x ,y;
	scanf("%d%d", &n, &s);
	for(int i=1; i<=n; i++){
		scanf("%d%d", &x, &y);
		if(x>y) swap(x,y);
		maxx=max(x,maxx);
		minn=min(y,minn);
		v.push_back({x,y});
	}
//	cout << minn << " " << maxx << '\n';
	for(int i=0; i<n; i++){
		if(minn>=v[i].st && minn<=v[i].nd && maxx>=v[i].st && maxx<=v[i].nd) continue;
		cout << -1;
		return 0;
	}
	if(maxx<=s && minn>=s) cout << 0;
	else if(maxx>s) cout << maxx-s;
	else cout << s-minn;
	return 0;
}
