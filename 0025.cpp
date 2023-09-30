#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, k1=0, k2=0, num;
    char n;
    string num1, num2, s, k;
    cin >> num1 >> n >> num2;
    reverse(num1.begin(),num1.end());
	reverse(num2.begin(),num2.end());
	for(i=0; i<num1.size();i++){
		if(num1[i]=='1') break;
		k1++;
	}
	for(i=0; i<num2.size();i++){
		if(num2[i]=='1') break;
		k2++;
	
	}
	if(num1.size()>num2.size()){
		s = num1;
		num1 = num2;
		num2 = s;
	}	
	num = num2.size()-num1.size();
	if(n == '*'){
    	cout << "1";
    	for(i=1; i<=k1+k2; i++) cout << 0;
	}
	else if(n == '+'){
		if(num1.size()==num2.size()){
			cout << "2";
			for(i=1; i<num1.size(); i++) cout << 0;
		}
		else{
			cout << "1";
			for(i=1; i<num; i++) cout << 0;
			cout << "1";
			for(i=1; i<num1.size(); i++) cout << 0;
		}
	} 
}