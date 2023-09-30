#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int num[n];
	for(int i=0; i<n; i++){
		cin >> num[i];
	}
	sort(num, num+n);
	if(n<3) cout << "no";
	else if(num[0]+num[1]<=num[n-1]) cout << "yes";
	else cout << "no";
}
