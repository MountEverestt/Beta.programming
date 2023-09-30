#include<bits/stdc++.h>
using namespace std;
int main(){
	string num;
	cin >> num;
	int low=0, up=0;
	for(int i=0; i<num.size(); i++){
		if(num[i]>='a' && num[i]<='z') low=1;
		else up=1;
	}
	if(up && low) cout << "Mix";
	else cout << (up ? "All Capital Letter" : "All Small Letter");
}
