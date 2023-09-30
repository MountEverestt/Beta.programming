#include<bits/stdc++.h>
using namespace std;
int main(){
/*	int i, n, num[214];
	long double let[214];
	if(1<=n<=20){
		cin >> n;
	}
	for(i=0; i<n; i++){
		cin >> num[i];
	}
	if(0<=num[i]<=214){
		for(i=0; i<n; i++){
			let[i] = pow(2,num[i]);
			printf("%.0Lf\n", let[i]);
		}*/
	int a,b;
	cin >> a;
	long double x;
	for (int i = 0; i < a; i++)
	{
		x = 1;
		cin >> b;
		for (int j = 0; j < b; j++)
		{
			x = x * 2;
		}
		printf("%.0Lf\n", x);
	}
	return 0;
}
