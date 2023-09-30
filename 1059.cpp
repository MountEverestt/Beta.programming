#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
int p[3][3]={{1,2,3},
			 {4,5,6},
			 {7,8,9}};
vector<char>g[] = {{'A', 'B', 'C'}, {'D', 'E', 'F'}, {'G', 'H', 'I'}, {'J', 'K', 'L'}, {'M', 'N', 'O'}, {'P', 'Q', 'R', 'S'}, {'T', 'U', 'V'}, {'W', 'X', 'Y', 'Z'}};
int main(){		
	int n, a, x, y, t;
	cin >> n;
	cin >> a >> t;
	string s;
	int nx=(a-1)/3;
	int ny=(a-1)%3;
	if(t>0 && a>1) s.push_back(g[a-2][(t-1)%g[a-2].size()]);
	for(int i=1; i<n; i++){
		cin >> y >> x >> t;
		nx+=x;
		ny+=y;
		a=p[nx][ny];
		if(a==1){
			for(int j=1; j<=t && !s.empty(); j++) s.pop_back();			
		}
		else if(t>0) s.push_back(g[a-2][(t-1)%g[a-2].size()]);
	}
	if(s.empty()) s="null";
	cout << s;
	
	return 0;
}