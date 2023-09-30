#include<bits/stdc++.h>
#define st first
#define nd second
#define ull unsigned long long
#define vec vector
#define umap unordered_map
using namespace std;
int main(){    
	ull n;
	cin >> n;
	ull s=0, e=1e18;
	while(s<e){
		ull mid=(s+e)/2;
		ull x = mid*23+(mid/12)*98;
	//	cout << x << '\n';
		if(x>=n) e=mid;
		else s=mid+1;
	}  
	cout << s*7;
	return 0;
}