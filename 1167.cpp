#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long lnog
#define vec vector
#define umap unordered_map
using namespace std;
string a;
int k, p[5];
vec<char>v;
int main(){
	cin >> a >> k;
	if(a.size()==k){
		cout << 0;
		return 0;
	}
	int n=0, s=0, w=0, e=0;
	for(int i=0; i<a.size(); i++){
		if(a[i]=='N') n++;
		else if(a[i]=='S') s++;
		else if(a[i]=='W') w++;
		else e++;
	}
	if(n>s) swap(n,s);
	if(w>e) swap(w,e);
	while(k--){
        if(n)n--;
        else if(w)w--;
        else if(s)s--;
        else e--;
    }
//    cout << n << " " << s << " " << w << " " << e << '\n';
	cout << 2*(abs(n-s)+abs(e-w));
	return 0;
}
