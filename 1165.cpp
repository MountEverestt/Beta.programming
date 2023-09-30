#include<bits/stdc++.h>
using namespace std;
int main(){
	long long x, s=1;
	int n;
	cin >> n >> x;
	s=x;
	for(int i=1; i<n; i++){
		cin >> x ;
		s=__gcd(x,s);
	}
	int ans=0;
//	cout << s << endl;
	for(int i=1; i<=sqrt(s); i++){
		if(s%i==0){
			if(s/i!=i) ans++;
			ans++;
		}
	}
	cout << ans;
}