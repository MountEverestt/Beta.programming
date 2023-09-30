#include<bits/stdc++.h>
using namespace std;
bool vis[5001];
vector<int>v;
int main(){
	int n, m, idx=0;
	cin >> n >> m;
	for(int i=1; i<=n ;i++) v.push_back(i);
	while(!v.empty()){
		idx+=(m-1);
		idx%=v.size();
		cout << v[idx] << '\n';
		v.erase(v.begin()+idx);
	}
}
/*
5 3
*/
