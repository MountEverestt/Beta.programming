#include<bits/stdc++.h>
using namespace std;
int main(){
	string str, line1,line2,line3;
	cin >> str;
	line1 = '.';
	line2 = '.';
	line3 = '#';
	for(int i=0; i<str.size(); i++){
		char n=str[i];
		if((i+1)%3==0){
			line1 += ".*..";
			line2 += "*.*.";
			line3.pop_back();
			line3 += "*.";
			line3.push_back(n);
			line3 += ".*";
		}
		else{
			line1 += ".#..";
			line2 += "#.#.";
			line3 += ".";
			line3.push_back(n);
			line3 += ".#";
		}
		
	}
	cout << line1 << endl;
		cout << line2 << endl;
		cout << line3 << endl;
		cout << line2 << endl;
		cout << line1 << endl;
}
