#include<bits/stdc++.h>
using namespace std;
string a, b, k, ans;
int main(){
	int n, m;
	cin >> n >> m;
	cin >> a >> b;
	cin >> k;
	for(int i=0; i<m; i++){	
		char s=k[i];
		for(int j=0; j<n; j++){	
			vector<char>v;
			v.push_back(a[j]);
			v.push_back(b[j]);
			v.push_back(s);
			sort(v.begin(),v.end());
			s=v[1];
		}
		ans+=s;
	}
	cout << ans;
}
