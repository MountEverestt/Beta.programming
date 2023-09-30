#include<bits/stdc++.h>
using namespace std;
vector<int>g;
int main(){
	int x, n=5;
	g.resize(n);
	for(int i=1; i<=n; i++){
		cin >> g[i-1];
	}
	int yes=1;
	while(yes){
		yes=0;
		for(int i=0; i<n-1; i++){
			if(g[i]>g[i+1]){
				swap(g[i],g[i+1]);
				yes=1;
				for(auto k : g) cout << k << " ";
				cout << endl;
			}
		}
	}
}