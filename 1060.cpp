#include<bits/stdc++.h>
using namespace std;
char arr[10100][10100];
int x, y;
struct DATA{
	int y,x;
	bool operator < (const DATA & d2) const{
		return y<d2.y;
	}
};
vector<DATA>v;
int main(){
	int p, n=0, m=0;
	cin >> p;
	for(int i=1; i<=p; i++){
		cin >> y >> x;
		m=max(m,y+x*2-1);
		n=max(n,x);
		v.push_back({y,x});
	}
	sort(v.begin(),v.end());
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++) arr[i][j]='.';
	}
	int yes=1;
	for(auto k : v){
		yes=1;
		for(int i=n-k.x+1; i<=n; i++){
			for(int j=k.y; j<=2*k.x+k.y-1; j++){
				if(j==k.y+k.x-(i-(n-k.x+1))-1 && yes==1){
					if(arr[i][j]=='\\'){
						arr[i][j]='v';
						for(int h=i+1; h<=n; h++) arr[h][j+1+(h-(i+1))]='X';
						yes=0;
					}
					else if(arr[i][j-1]=='\\'){
						arr[i][j]='/';
						for(int h=i+1; h<=n; h++) arr[h][j-1-(h-(i+1))]='X';
						yes=0;
					}
					else arr[i][j]='/';	
				}
				if(j==k.y+k.x+(i-(n-k.x+1))) arr[i][j]='\\';
			}
		}
		
		for(int i=n; i>=n-k.x+1; i--){
			for(int j=k.y+(n+1-i); j<=k.y+2*k.x-1-(n+1-i); j++){
				arr[i][j]='X';
			}
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cout << arr[i][j];
		}
		cout << endl;
	}
	//
}