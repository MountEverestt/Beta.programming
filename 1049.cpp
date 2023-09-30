#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define endl '\n'
using namespace std;
int n, m, num, lu, v, p;
queue<pair<int,int>>q[10005];
set<int>s;
int main(){		
	cin >> n >> m;	
	for(int i=1; i<=n ; i++){
		cin >> num >> lu >> v;
		q[lu].push({v,num});
	//	sz[lu]++;
		s.insert(lu);
	}
//	for(int i=1; i<=m; i++) p=max(p,sz[i]);
	while(true){
		bool check=false;
		int maxx=0, idx;
		vector<int>mem;
		for(auto i : s){
			if(!q[i].empty()){
				check=true;
				if(q[i].front().st>maxx){										
					maxx=q[i].front().st;
					idx=q[i].front().nd;					
				}
				q[i].pop();
			//	cout << q[i].front().st << " " << q[i].front().nd << endl;
			}
			else mem.push_back(i);
		}
		for(auto k : mem) s.erase(k);
		if(!check) return 0;
		cout << idx << endl;
		maxx=-1;
	}
}