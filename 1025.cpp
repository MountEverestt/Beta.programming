#include<bits/stdc++.h>
using namespace std;
int main(){
	long long w=1, k;
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> k;
		w = (w*k)/__gcd(w,k);
	}
	cout << w;
}