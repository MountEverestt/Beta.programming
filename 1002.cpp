#include<bits/stdc++.h>
using namespace std;
int num[5];
int main(){
	int d;
	cin >> d;
	for(int j=1; j<=d; j++){
		int i = j;
		if(i>=100){
			num[4] += i/100;
			i%=100;
		}
		if(i>=90){
			num[4]++;
			num[2]++;
			i -=90;
		}
		if(i>=50){
			num[3]++;
			num[2] += (i-50)/10;
			i %=10;
		}
		if(i>=40){
			num[3]++;
			num[2]++;
			i -=40;
		}
		if(i>=10){
			num[2] += i/10;
			i %=10;
		}
		if(i==9){
			num[2]++;
			num[0]++;
			i=0;
		}
		if(i>=5){
			num[1]++;
			num[0]+=i-5;
			i=0;
		}
		if(i==4){
			num[1]++;
			num[0]++;
			i = 0;
		}
		if(i>=1){
			num[0]+=i;
		}
	}
	for(int i=0; i<5; i++){
		cout << num[i] << " " ;
	}
}
