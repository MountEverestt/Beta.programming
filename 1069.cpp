#include<bits/stdc++.h>
using namespace std;
stack<char>s;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	char x;
	cin >>n ;
	
	for(int i=1; i<=n; i++){
		cin >> x;
		if(!s.empty()){
			if(x==s.top()) s.pop();
			else s.push(x);
		}
		else s.push(x);
		
	}
	if(s.empty()){
		cout << "0" << endl << "empty";
		return 0;
	}
	cout << s.size() << endl;
	while(!s.empty()){
		cout << s.top();
		s.pop();
	}
}