#include<bits/stdc++.h>
using namespace std;
int main(){
	int i, j, d, r, len[25], num[25]={0}, k;
	cin >> r >> d;
	char let[r][d];
	for(i=0; i<r; i++){
		for(j=0; j<d; j++){
			cin >> let[i][j];
		}
	}
	for(j=0; j<d; j++){
		cin >> len[j];
	}
	for(i=0; i<r; i++){
		for(j=0; j<d; j++){
			if(let[i][j] == 'O'){
				num[j]++;
			}
		}
	}
	for(j=0; j<d; j++){
		if(num[j]==0){
			if(len[j]==1){
				let[r-1][j] ='#';
			}
			else{
				for(i=r-1; i>r-1-len[j]; i--){
					let[i][j] = '#';
				}
			}
		}
		else if(num[j]>0){
			for(i=0; i<r; i++){
				if(let[i][j]=='O'){
					for(k=i-1; k>i-1-len[j]; k--){
						let[k][j] = '#';
					}
					break;
				}
			}
		}
	}
	for(i=0; i<r; i++){
		for(j=0; j<d; j++){
			cout << let[i][j];
		}
		cout << endl;
	}
}
