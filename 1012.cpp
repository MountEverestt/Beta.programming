#include<bits/stdc++.h>
using namespace std;
int num[20];
int main(){
	int n, x;
	cin >> n;
	long long ans=0;
	for(int k=1; k<=n; k++){
		for(int i=0; i<5; i++){
			cin >> x;
			num[i]+=x;
		}
//		cout << ans << endl;
	}
	cout << num[0]+(6*num[1]+4*num[2]+2*num[3]+num[4]+7)/8; 
}
