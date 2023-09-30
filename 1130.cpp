#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
using namespace std;
int a[10001];
int main(){
	int n, ans=0;
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			ans=(ans+abs(a[i]-a[j]))%49999;
		}
	}
	for(int i=1; i<=n-2; i++) ans=(ans*i)%49999;
	cout << ans;
}
