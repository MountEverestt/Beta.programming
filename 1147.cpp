#include<bits/stdc++.h>
using namespace std;
int maxx, g[999999];
int update(int a, int b){
	int now = (1<<maxx)+a-1;
	g[now]=b;
//	cout << now << " ";
	now/=2;
	while(now){
		g[now]=max(g[now*2],g[now*2+1]);
		now/=2;
	}
}
int p(int now, int l, int r, int a, int b){
	if(l==a && r==b) return g[now];
	int mid = (l+r)/2, maxx=INT_MIN;
	if(a>mid) maxx=max(maxx,p(2*now+1,mid+1,r,a,b));
	else if(b<=mid) maxx=max(maxx,p(2*now,l,mid,a,b));
	else maxx=max(maxx,max(p(2*now,l,mid,a,mid),p(2*now+1,mid+1,r,mid+1,b)));
	return maxx;
}
char c;
int main(){
	int n, m, a, b;	
	scanf("%d%d", &n, &m);
	while((1<<maxx) < n) maxx++;	
	for(int i=1; i<=m ;i++){
		cin >> c;
		scanf("%d%d", &a, &b);
		if(c=='U') update(a,b);//(i,(1<<maxx)) think same if((1<<maxx)>n)//
		else printf("%d\n", p(1,1,(1<<maxx),a,b));
	}
}