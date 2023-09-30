#include<bits/stdc++.h>
#define ll long long
#define st first
#define nd second
using namespace std;
int qs[101];
bitset<101>vis;
int main(){
	int n ,k, t, x;
	scanf("%d%d%d%d", &n, &k ,&t, &qs[0]);
	for(int i=1; i<n; i++){
		scanf("%d" ,&x);
		qs[i]=qs[i-1]+x;
	}
	int ans=0, point;
	for(int i=1; i<=qs[n-1]; i++){
		int p=0, idx;
		for(int j=0; j<n; j++) vis[j]=false;
		for(int j=0; j<k; j++){
			if(i+t*j>qs[n-1]) break;
			idx = lower_bound(qs,qs+n,i+t*j)-qs;
			if(vis[idx]) continue;
			vis[idx]=true;
			p++;
		}
		if(ans<p){
			point=i;
			ans=p;
		}
	}
	cout << point << " " << ans;
} 