#include<bits/stdc++.h>
using namespace std;
int main(){
	string num;
	int i, let=0, len=0;
	cin >> num;
	for(i=0; i<num.size(); i++){
		let = (let*10+(num[i]-'0'))%3;
		len = (len*10+(num[i]-'0'))%11;
	}
	cout << let << " "<< len;
}
