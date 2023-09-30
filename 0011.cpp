#include<bits/stdc++.h>
using namespace std;
int main(){
	int s=0, x, num[45]={0};//0-44={0}
	for(int i=0; i<10; i++){
		cin >> x;
		num[x%42]=1;//3->0, 3->0
	}
	for(int i=0; i<42; i++){
		if(num[i]==1) s++;
	}
	cout << s;
}