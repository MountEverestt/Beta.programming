#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, num[1005], s=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> num[i];
		if(num[i]==0) s++;
	}
/*	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(num[i]>num[j]) swap(num[i],num[j]);//3 1 0 8 8-->1 3 0 8 8-->0 3 1 8 8-->0 1 3 8 8
		}
	}*/
	sort(num,num+n);//0 0 0 1 3 8 8, j=4
	int j;
	for(int i=0; i<n; i++){
		if(num[i]!=0){
			j=i;
			break;
		}
	}
	cout << num[j];//1
	for(int i=0; i<s; i++) cout << "0";// 1 0 0 0
	for(int i=j+1; i<n; i++){
		cout << num[i];
	}//1 0 0 0 3 8 8
/*	for(int i=0; i<n; i++){
		if(i!=j) cout << num[i];
	}*/
}