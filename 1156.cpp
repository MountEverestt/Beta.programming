#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
int n;
vec<char>v;
void rec(int a, int b){
	if(a==n || b==n){
		for(auto k : v) cout << k << " ";
		cout << '\n';
		return ;
	}
	
	v.push_back('W');
	rec(a+1,b);
	v.pop_back();
	
	v.push_back('L');
	rec(a,b+1);
	v.pop_back();
}
int main(){
	int a, b;
	cin >> n >> a >> b;
	rec(a,b);
}
