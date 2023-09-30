#include<bits/stdc++.h>
using namespace std;
int main(){
	int i, n, s, num[10100], let[10100]={0}, max=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &num[i]);
		let[num[i]]++;
	}
	for(i=0; i<10001; i++){
		if(let[i]>max) max=let[i];
	}
	for(i=0; i<10001; i++){
		if(max==let[i]){
			cout << i << " ";
		}
	}
	return 0;
}