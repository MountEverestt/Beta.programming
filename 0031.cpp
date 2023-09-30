#include<bits/stdc++.h>
using namespace std;
int num(int n){
	int s=0;
	while(n>1){
		n /=2;
		s++;
	}
		return s;
}
int main(){
	int A, B, C, k;
	cin >> A;
	cin >> B;
	cin >> C;
	cout << num(A)+num(B)+num(C);
}
