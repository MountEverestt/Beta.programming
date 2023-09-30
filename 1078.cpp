#include<bits/stdc++.h>
#define ll long long
#define st first
#define nd second
using namespace std;
ll a[1000005];
int main(){
	int n, x;
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%lld", &a[i]);
	sort(a,a+n);
	ll ans=0;
	for(int i=0; i<n/2; i++){
		ans+=a[n-i-1]-a[i];
	}
	printf("%lld", ans);
}