#include<bits/stdc++.h>
using namespace std;
bitset<8000005>check;
int sort(int x){
	vector<int>v;
	while(x!=0){
		v.push_back(x%10);
		x/=10;
	}
	for(int i=0; i<v.size()/2; i++){
		if(v[i]!=v[v.size()-i-1]) return 0;
	}
	return 1;
}
int main(){
	int n;
	cin >> n;
	check[0]=check[1]=0;
	for(int i=2; i<=8000000; i++){
		if(check[i]==false){
			if(i>=n && sort(i)){
				cout << i;
				return 0;
			}
		}
		for(int j=i*2; j<=8000000; j+=i) check[j]=true;
	}
}
