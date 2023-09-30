#include<bits/stdc++.h>
using namespace std;
int arr[15], k, x;
char w;
vector<pair<int,int>>v, g;
vector<int>gg;
int main(){
	int n, m;
	cin >> n >> m;
	for(int i=1; i<=m; i++){
		cin >> x >> k;
		v.push_back({x,k});
	}
	while(1){
		cin >> w;
		int yes=1;
		if(w=='E'){
			cin >> k;
			int h;
			for(auto p : v){
				if(k==p.second){
					for(int j=g.size()-1; j>=0; j--){
						if(p.first==g[j].first){
							g.insert(g.begin()+j+1,{p.first,p.second});
							yes=0;
							break;	
						}
					}
					if(yes) g.push_back({p.first,p.second});
				}
				
			}
			
		}
		
		else if(w=='D'){
			gg.push_back(g[0].second);
			g.erase(g.begin());
		}
		else if(w=='X') break;
		
	}
	for(auto k : gg) cout << k << endl;
	cout << 0;
}
	
