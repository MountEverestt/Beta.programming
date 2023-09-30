#include<bits/stdc++.h>
using namespace std;
bitset<1000005>ma;
int main(){	
	bool check=true;
	int s, e;
	cin >> s >> e;
	ma[1]=false;
	for(int i=2; i<=1000; i++){
		bool prime=true;
		for(int j=i+1; j<=i*i-1; j++){
			if((i*i)%j==0){
				prime=false;
				break;	
			}
		}
		if(prime) ma[i*i]=true; 
	}
	for(int i=s; i<=e; i++){
		if(ma[i]){
			printf("%d ", i);
			check=false;
		}
	}
	if(check) cout << "-1";
	return 0;
}