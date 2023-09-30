#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, x, h, y, w=0, k=0, num[3001];
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> x >> h >> y;
		w = max(w,y);
		for(int j=x; j<y; j++){
			if(num[j]<h){
				num[j]=h;
			}
		}
	}
	for(int i=1; i<=w+1; i++){
		if(num[i]!=k){
			cout << i << " " << num[i] << " " ;
			
			k=num[i];
		}
	}
}