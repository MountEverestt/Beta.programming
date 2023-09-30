#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
#define endl '\n'
using namespace std;
vec<int>p, mi, mul;
int main(){
	int n, x, have=0;
	char c;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> c >> x;
		if(c=='-'){
			mi.push_back(x);
		}
		else if(c=='+'){
			p.push_back(x);
		}
		else{
			if(x==0) have=1;
			mul.push_back(x);
		}
	}
	ll sum=0;
	for(int i=0; i<p.size(); i++) sum+=p[i];
	for(int i=0; i<mul.size(); i++){
		if(mul[i]==0) continue;
		sum*=mul[i];
	}
	if(!have) for(int i=0; i<mi.size(); i++) sum-=mi[i];
	cout << sum;
	return 0;
}