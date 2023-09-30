#include<bits/stdc++.h>
using namespace std;
int num[10][10];
int check1(int let[]){
	int s;
	for(int i=1; i<=9; i++){
		if(let[i]!=1) return 0; 
	}
	return 1;
}
int sort(int n, int m){
	int s, i, j, line1=0, line2=0, sumr[10]={0}, sumd[10]={0}, let[10]={0}, p=1;
		for(i=n; i<n+3; i++){
			for(j=m; j<m+3; j++){
				let[num[i][j]]++;
				sumr[i]+=num[i][j];
				sumd[j]+=num[i][j];
				if((i==n && j==m) || (i==n+1 && j==m+1) || (i==n+2 && j==m+2)) line1+=num[i][j];
				if((i==n && j==m+2) || (i==n+1 && j==m+1) || (i==n+2 && j==m)) line2+=num[i][j];
			}
		}
		s = check1(let);
		if(s==0) p=0;
		for(i=n; i<n+3; i++){
			for(j=i+1; j<n+3; j++){
				if(sumr[i]!=sumr[j]) p=0;
				if(sumr[i]!=line1 || sumr[i]!=line2) p=0;
			}
		}
		for(i=m; i<m+3; i++){
			for(j=i+1; j<m+3; j++){
				if(sumd[i]!=sumd[j]) p=0;
				if(sumd[i]!=line1 || sumd[i]!=line2) p=0;
			}
		}
		if(line1!=line2) p=0;
		return p;
}
int check2(int n){
	int s, i, j, p=1, let[10]={0};
	for(j=0; j<9; j++){
		let[num[n][j]]++;
	}
	s = check1(let);
	if(s==0) p=0;
	return p;
}
int check3(int m){
	int s, i, j, p=1, let[10]={0};
	for(i=0; i<9; i++){
		let[num[i][m]]++;
	}
	s = check1(let);
	if(s==0) p=0;
	return p;
}
int main(){
	int i, j, k=0, n;
	cin >> n;
	int start[10][10], f[n]={1};
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			cin >> start[i][j];
		}
	}
	while(k!=n){
		for(i=0; i<9; i++){
	    	for(j=0; j<9; j++){
	 			cin >> num[i][j];
			}
		}
		for(i=0; i<=6; i+=3){
			for(j=0; j<=6; j+=3){
				f[k] = sort(i,j);
			}
		}
		for(i=0; i<9; i++){
			f[k] = check2(i);
			f[k] = check3(i);
		}
		for(i=0; i<9; i++){
			for(j=0; j<9; j++){
				if(start[i][j]!=0) {
					if(num[i][j]!=start[i][j]) f[k]=0;
				}
			}
		}
		k++;
	}
	
	for(i=0; i<n; i++){
		if(f[i]!=0){
			cout << i+1 << endl;
		}
	}
	cout << "END";
}
