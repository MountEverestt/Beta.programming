#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main(){
	int n, k, x;
	for(int i=0; i<4; i++){
		cin >> x;
		v.push_back(x);	
	}
	sort(v.begin(),v.end());
	
	cout << v[0]*v[2];
}