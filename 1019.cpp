#include<bits/stdc++.h>
using namespace std;
int main(){
	char let[201], len[201], s[201];
	int i, j, k, c=0;
	cin >> let >> len;
	int max=0, n, m=0;
	if(strlen(let)>strlen(len)){
		for(i=0; i<strlen(len); i++){
		for(j=0; j<strlen(let); j++){
			c=0;
			if(len[i]==let[j]){
				for(k=j; k<strlen(let); k++){
					if(let[k]==len[k+(i-j)]){
						c++;
					}
					else break;
				}
			}				
			if(c>max){
				max=c;
				n = m;
			}	
		}
		m++;
	}
	for(i=n; i<n+max; i++){
		cout << len[i];
	}
	}
	else{
		for(i=0; i<strlen(let); i++){
		for(j=0; j<strlen(len); j++){
			c=0;
			if(let[i]==len[j]){
				for(k=j; k<strlen(len); k++){
					if(len[k]==let[k+(i-j)]){
						c++;
					}
					else break;
				}
			}				
			if(c>max){
				max=c;
				n = m;
			}	
		}
		m++;
	}
	for(i=n; i<n+max; i++){
		cout << let[i];
	}
	}
}
