#include<bits/stdc++.h>
using namespace std;
int num[3005], check[3005];
int main(){
	int w, h, n, s, x, k=0;
	cin >> w >> h >> n;
	for(int i=1; i<=n; i++){
		
		cin >> s >> x;
		
		for(int j=s; j<s+x; j++){
			if(j>w) break;
			if(check[j]!=1 && check[j]!=2) check[j]=1;
			else if(check[j]==1) check[j]=2;
			
		}
	}
	int nohun=0, fif=0;
	for(int i=0; i<w; i++){
		if(check[i]==1){
		//	cout << i << " 1 " << endl;
			fif++;
		}
		else if(check[i]==0){
		//	cout << i << " 2 " << endl;
			nohun++;
		}
	}
	cout << h*nohun << " " << h*fif; 
} 
