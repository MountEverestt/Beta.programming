#include<bits/stdc++.h>
#define ll long long
using namespace std;
stack<char>s;
map<char,char>ma;
int main(){
	ma[')']='(';
	ma['}']='{';
	ma[']']='[';
	string n;
	cin >> n;
	for(auto k : n){
		if(s.empty()) s.push(k);
		else{
			if(ma[k]==s.top()) s.pop();
			else s.push(k);
		}
	}
	cout << s.size();
}