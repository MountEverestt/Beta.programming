#include<bits/stdc++.h>
using namespace std;
char arr[30][101], word[30][101];
int xx[101], xy[101], n, m;
int check(int x, int y, int k){
	int yes=1, w=strlen(word[k]);
	for(int i=x; i<x+w; i++){
		if(arr[i][y]!=word[k][i-x]){
			yes=0;
			break;
		}
	}
	if(yes) return 1;
	else yes=1;
	for(int i=x; i>x-w; i--){
		if(arr[i][y]!=word[k][x-i]){
			yes=0;
			break;
		}
	}
	if(yes) return 1;
	else yes=1;
	for(int j=y; j<y+w; j++){
		if(arr[x][j]!=word[k][j-y]){
			yes=0;
			break;
		}
	}
	if(yes) return 1;
	else yes=1;
	for(int j=y; j>y-w; j--){
		if(arr[x][j]!=word[k][y-j]){
			yes=0;
			break;
		}
	}
	if(yes) return 1;
	else yes=1;
	for(int i=x; i>x-w; i--){
		if(arr[i][y-(x-i)]!=word[k][x-i]){
			yes=0;
			break;
		}
	}
	if(yes) return 1;
	else yes=1;
	for(int i=x; i<x+w; i++){
		if(arr[i][y+(i-x)]!=word[k][i-x]){
			yes=0;
			break;
		}
	}
	if(yes) return 1;
	else yes=1;
	for(int j=y; j<y+w; j++){
		if(arr[x-(j-y)][j]!=word[k][j-y]){
			yes=0;
			break;
		}
	}
	if(yes) return 1;
	else yes=1;
	for(int j=y; j>y-w; j--){
		if(arr[x+(y-j)][j]!=word[k][y-j]){
			yes=0;
			break;
		}
	}
	if(yes) return 1;
	else return 0;
}
int main(){
	cin >> n >> m;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		for(int j=0; j<m; j++){
			arr[i][j]=tolower(arr[i][j]);
		}
	}
	int s;
	cin >> s;
	for(int i=0; i<s; i++){
		cin >> word[i];
		for(int j=0; j<strlen(word[i]); j++){
			word[i][j]=tolower(word[i][j]);
		}		
	}
	int ss;
	for(int k=0; k<s; k++){
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				ss=0;
				if(arr[i][j]==word[k][0]) ss=check(i,j,k);
				if(ss){
					xx[k]=i;
					xy[k]=j;
					goto D;
				}
			}
		}
		D :;
	}
	for(int i=0; i<s; i++){
		cout << xx[i] << " " << xy[i] << endl;
	}
}
