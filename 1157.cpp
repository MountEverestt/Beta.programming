#include<bits/stdc++.h>
using namespace std;
struct DATA{
	int x, i;
	bool operator < (const DATA & d2) const{
		return x > d2.x;
	}
};
priority_queue<DATA>pq;
int main(){
	int n, m, x;
	cin >> n >> m;
	cin >> x;
	pq.push({x,1});
	for(int i=2; i<=n; i++){
		cin >> x;
		if(pq.empty()) pq.push({x,i});
		else{
			while(pq.top().i < i-m) pq.pop();
			
			pq.push({pq.top().x+x,i});
		}
	}
	while(!pq.empty() && pq.top().i!=n) pq.pop();
	cout << pq.top().x;
}