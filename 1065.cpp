#include<bits/stdc++.h>
using namespace std;
struct DATA{
	int x1, y1, x2, y2;
};
vector<DATA>v;
int main(){
	int n, m, x1, x2, y1, y2;
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		cin >> x1 >> y1 >> x2 >> y2;
		v.push_back({x1,y1,x2,y2});
	}
	for(int i=1; i<=m; i++){
		cin >> x1 >> y1 >> x2 >> y2;
		int s=0;
		for(auto k : v){
		//	cout << k.y1 << ">=" << y2 << " " << k.y2 << "<=" << y1 << '\n';
			if(k.x1>=x2 || k.x2<=x1) continue;
		//	cout << "out\n";
			if(k.y1<=y2 || k.y2>=y1) continue;
			s++;
		//	cout << 1;
		}
		cout << s << '\n';
	}
}
