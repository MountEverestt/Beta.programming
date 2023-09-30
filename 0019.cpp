#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define endl '\n'
using namespace std;
ll a[11], b[11];
int main(){
	int n;
	ll minn=2e18;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i] >> b[i];
	}
	for(int i=1; i<(1<<n); i++){
		ll aa=1, bb=0;
		for(int j=0; j<n; j++){
			if((i & (1<<j)) == (1<<j)){
				aa*=a[j];
				bb+=b[j];
			}
		}
		minn=min(abs(aa-bb),minn);
	}
	cout << minn;
}
