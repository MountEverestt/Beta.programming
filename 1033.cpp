#include<bits/stdc++.h>
#define ll long long
#define st first
#define nd second
#define vec vector
#define umap unordered_map
#define endl '\n'
using namespace std;
char a[5][1001];
int ma[101][101], sum[5];
pair<int,int>s[5];
int main() {
    int n, m;
    cin >> n >> m;
    for(int i=1; i<=4; i++){
    	for(int j=1; j<=m; j++) cin >> a[i][j];
	}
	s[1].st=1;
	s[1].nd=n;
	s[2].st=n;
	s[2].nd=n;
	s[3].st=n;
	s[3].nd=1;
	s[4].st=1;
	s[4].nd=1;
	ma[1][1]=4;
	ma[n][1]=3;
	ma[1][n]=1;
	ma[n][n]=2;
	
/*	for(int i=1; i<=4; i++){
		for(int j=1; j<=m; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}*/
	for(int j=1; j<=m; j++){
		for(int i=1; i<=4; i++){
			int check=0;
			if(a[i][j]=='E'){
				if(s[i].nd+1>n) continue;
				for(int k=1; k<=4; k++){
					if(k==i) continue;
					if(s[i].st==s[k].st && s[i].nd+1==s[k].nd){
						check=1;
						break;
					}
				}
				if(!check) s[i].nd++;
				else continue;
			}
			else if(a[i][j]=='S'){
				if(s[i].st+1>n) continue;
				for(int k=1; k<=4; k++){
					if(k==i) continue;
					if(s[i].st+1==s[k].st && s[i].nd==s[k].nd){
						check=1;
						break;
					}
				}
				if(!check) s[i].st++;
				else continue;
			}
			else if(a[i][j]=='W'){
				if(s[i].nd-1<1) continue;
				for(int k=1; k<=4; k++){
					if(k==i) continue;
					if(s[i].st==s[k].st && s[i].nd-1==s[k].nd){
						check=1;
						break;
					}
				}
				if(!check) s[i].nd--;
				else continue;
			}
			else if(a[i][j]=='N'){
				if(s[i].st-1<1) continue;
				for(int k=1; k<=4; k++){
					if(k==i) continue;
					if(s[i].st-1==s[k].st && s[i].nd==s[k].nd){
						check=1;
						break;
					}
				}
				if(!check) s[i].st--;
				else continue;
			}
			ma[s[i].st][s[i].nd]=i;
		/*	cout << a[i][j] << " ";
			for(int i=1; i<=n; i++){
				for(int j=1; j<=n; j++){
					cout << ma[i][j] << " ";
				}	
				cout << endl;
			}
			cout << endl;*/
		}
	}
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(ma[i][j]==0){
				cout << "No";
				return 0;
			}
			sum[ma[i][j]]++;
		//	cout << ma[i][j] << " ";
		}
	//	cout << endl;
	}
	int maxx=0, s=0;
	for(int i=1; i<=4; i++) maxx=max(maxx,sum[i]);
	for(int i=1; i<=4; i++){
		if(sum[i]==maxx) s++;
	}
	cout << s << " " << maxx << endl;
	for(int i=1; i<=4; i++){
		if(sum[i]==maxx) cout << i << endl;
	}
}
