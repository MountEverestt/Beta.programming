#include<bits/stdc++.h>
using namespace std;
int main(){
	string let, num;
	int n, i, j, s, k=0, m=0;
	cin >> let;
	for(i=0; i<let.size(); i++){
		let[i] = tolower(let[i]);
	}
	n = let.size();
	num = let;
	reverse(num.begin(),num.end());
	s = (n/2)-1;
	if(let==num){
		for(i=0; i<n/2; i++){
			if(let[i]==let[s-i]){
				k++;
			}
		}
		for(j=(n+1)/2; j<let.size();j++){
			if(let[j]==let[n-1-m]){
				m++;
			}
		}
	}
//	cout << k <<endl << m;
	if(let!=num) cout << "No";
	else if(n==1) cout << "Double Palindrome";
	else if(k==n/2 && m== n/2){
		cout << "Double Palindrome";
	}
	else {
		cout << "Palindrome";
	}
}