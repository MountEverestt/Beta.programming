#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	while(1){
		cin >> m;
		if(m<0) break;
		int k=0, w=1, s=0;
		for(int i=1; i<=m; i++){
			k=w;
			w=w+1+s;
			s=k;
		
		}
		cout << w << " " << w+1+s << endl;
	}
}