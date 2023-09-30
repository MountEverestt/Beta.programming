#include<bits/stdc++.h>
using namespace std;
unordered_map<unsigned long long,bool>ma;
int main(){	
	int t;
	unsigned long long x;
	cin >> t;
	ma[3]=true;
	ma[7]=true;
	ma[31]=true;
	ma[127]=true;
	ma[8191]=true;
	ma[131071]=true;
	ma[524287]=true;
	ma[2147483647]=true;
	ma[2305843009213693951]=true;
	while(t--){
		cin >> x;
		cout << (ma[x] ? "YES" : "NO") << '\n';
	}
}
