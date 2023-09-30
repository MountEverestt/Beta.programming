#include<bits/stdc++.h>
using namespace std;
typedef struct DATA STD;
struct DATA{
	int done;
	int sum;
	char let;
};
int main(){
	STD data[7];
	char num[10000];
	int i, j, let[7]={0}, p=0, Min, k=0, l=0;
	for(i=0; i<7; i++){
		data[i].let=i+'A';
		data[i].sum=0;
		data[i].done=1;
	}
	while(1){
		cin >> num;
		p=0;
		Min = 2e9;
		l=0;
		if(num[0]=='!') break;
		for(i=0; i<7; i++){
			let[i]=0;
		}
		for(i=0 ; i<strlen(num); i++){
			let[num[i]-'A']++;
		}
		for(i=0; i<7; i++){
			data[i].sum+=let[i];
		}
		for(i=0; i<7; i++){
			if(data[i].done==1){
				if(Min>data[i].sum) Min=data[i].sum;
			}
		}
		for(i=0; i<7; i++){
			if(data[i].done==1){
				if(data[i].sum==Min) p++;
			}
		}
		for(i=0; i<7; i++){
			if(data[i].done==1) l++;
		}
		if(p==1 && l!=1){
			for(i=0; i<7; i++){
				if(data[i].done==1){
					if(data[i].sum==Min){
						data[i].done=0;
					}
				}
			}
		} 
		
	}
	for(i=0; i<7; i++){
		if(data[i].done==1) k++;
	}
	for(i=0; i<7; i++){
		for(j=i+1; j<7; j++){
			if(data[i].sum<data[j].sum) swap(data[i],data[j]);
			else if(data[i].sum==data[j].sum){
				if(data[i].let>data[j].let) swap(data[i],data[j]);
			}
		}
	}
	cout << k << endl;
	for(i=0; i<7; i++){
		if(data[i].done==1){
			cout << data[i].let << " " << data[i].sum << endl;
		}
	}
}
