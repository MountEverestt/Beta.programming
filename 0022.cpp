#include<bits/stdc++.h>
using namespace std;
int main(){
	int w, i, j, n;
	cin >> n;
	w=n;
	if(n%2==0) w--;
	for(i=1; i<=(n+1)/2; i++){
		for(j=1; j<=w; j++){
			if(j==((n+1)/2)-(i-1) || j==((n+1)/2)+(i-1)){
			cout << "*";
			}
		    else cout << "-";
			
		}
		cout << endl;
	}
	for(i=n/2; i>=1; i--){
		for(j=1; j<=w; j++){
			if(j==((n+1)/2)-(i-1) || j==((n+1)/2)+(i-1)){
				cout << "*";
			}
			else cout << "-";
		}
		cout << endl;
	}
}	
