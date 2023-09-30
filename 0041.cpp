#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n==1){
		cout << "2.000000";
	}
	else if(n==3){
		printf("%.6f", 2+sqrt(3)); 
	}
	else if(n%2==0){
		printf("%d.000000", n);
	}
	else {
		printf("%.6f", (n-3)+2*sqrt(3));
	}
}