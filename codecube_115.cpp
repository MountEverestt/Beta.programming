#include<bits/stdc++.h>
#define vec vector
#define umap unordered_map
#define ll long long
#define st first
#define nd second
using namespace std;
string s;
int main(){	
	int t;
	cin >> t;
	for(int i=1; i<=t; i++){
		cin >> s;
		int a=0, b=0, c=0;
		for(auto k : s){
			if(k=='X') a=1;
			else if(k=='T') b=1;
			else if(k=='-') c=1;
		}
		if(a) printf("Case #%d: No - Runtime error\n",i);
        else if(b) printf("Case #%d: No - Time limit exceeded\n",i);
        else if(c) printf("Case #%d: No - Wrong answer\n",i);
        else printf("Case #%d: Yes\n",i);
	}
	return 0; 
}