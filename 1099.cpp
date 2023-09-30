#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	int n=__gcd(a,b);
	for(int i=1; i<=n; i++){
		if(a%i==0 && b%i==0){
			cout << i << " " << a/i << " " << b/i << '\n';
		}
	}
}
