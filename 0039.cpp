#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, n, m, k=0;
	cin >> n >> m;
	int num[n], let[m];
	for(i=1; i<=m; i++){
		cin >> let[i];
	}
	for(i=1; i<=n; i++){
		num[i-1] = i; 
	} 
  	do{
		for(i=1; i<=m; i++){
			if(num[0]==let[i]) k++;
		}
		if(k==0){
			for(i=0; i<n;i++){
				cout << num[i] << " ";
			}
			cout << endl;
		}
		
		k=0;
  	} while (next_permutation(num,num+n));
}
