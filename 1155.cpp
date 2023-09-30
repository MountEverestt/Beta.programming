#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
int main(){
	int n, x;
	cin >> n;
	int po=n, pe=n, co=0, ce=0, k=1;
	for(int i=1; i<=2*n; i++){
		cin >> x;
		if(x%2==0){
			ce++;
			co=0;
			if(ce<3) po--;
			else po-=3;
			
		}
		else if(x%2==1){
			ce=0;
			co++;
			if(co<3) pe--;
			else pe-=3;
			
		}
	//	cout << co << " " << ce << " " << po << " " << pe << '\n';
		if(pe<=0){
			cout << "1" << '\n' << x;
			return 0;
		}
		if(po<=0){
			cout << "0" << '\n' << x;
			return 0;
		}
	}
}