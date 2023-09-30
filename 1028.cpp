#include<bits/stdc++.h>
using namespace std;
int str[30];
int main(){
	char a, b, op;
	int x;
	while(true){
		cin >> op;
		if(op=='!'){
			cout << "!";
			return 0;
		}
		else if(op=='#'){
			cin >> a;
			cout << str[a-'A'] << endl;
		}
		else if(op=='='){
			cin >> a >> x;
			str[a-'A']=x; 
		}
		else if(op=='+'){
			cin >> a >> b;
			str[a-'A']=str[a-'A']+str[b-'A'];
		}
		else if(op=='-'){
			cin >> a >> b;
			str[a-'A']=str[a-'A']-str[b-'A'];
		}
		else if(op=='*'){
			cin >> a >> b;
			str[a-'A']=str[a-'A']*str[b-'A'];
		}
		else if(op=='/'){
			cin >> a >> b;
			str[a-'A']=str[a-'A']/str[b-'A'];
		}
	}
}