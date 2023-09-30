#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int i, j, n, k, len[30000]={0};
	cin >> n >> k;
	char let[k][n];	
	for(i=0; i<k; i++){
		cin >> let[i];
	}
		for(i=0; i<k; i++){
		for(j=0; j<n; j++){
			if(let[i][j] != let[i+1][j]){
				len[i]++;
			}
		}
	}
	for(i=0; i<k; i++){
		if(len[i]>2){
			for(j=0; j<n; j++){
				cout << let[i][j];
			}
			break;
		}
	}
}
