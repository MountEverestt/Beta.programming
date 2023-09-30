#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;//5
	int arr[n];
	for(int i=0; i<n; i++){//i=0,1,2,3,4
		cin >> arr[i];
	}
	for(int i=0; i<n; i++){ 
		for(int j=i+1; j<n; j++){
			//i=0; arr[0] --> arr[1] --> arr[2] --> arr[3]
			//i=1; arr[1] --> arr[2] --> arr[3]
			if(arr[i]>arr[j]) swap(arr[i],arr[j]);//2 3 -- > 3 2
		}
	}
	cout << arr[0] << endl << arr[n-1];
}
