#include<bits/stdc++.h>
using namespace std;
int main(){
/*	long long n1, n2, s;
	cin >> n1 >> n2;
	s = __gcd(n1,n2);
	cout << s;*/
	int n, i, j, sum=0, k ,s;
	cin >> n;
	int num[n];
	for(i=0; i<n; i++){
		cin >> num[i];
	}
	int max=0;
	for(i=0; i<n; i++){
		sum=0;
		for(j=i; j<n; j++){
			sum+=num[j];
			if(sum>max) {
				max=sum;
				k = i;
				s = j;
			}
		}
	}
//	cout << max;
	if(max>0){
		for(i=k; i<=s; i++){
			cout << num[i] << " ";
		}
		cout << endl;
		cout << max;
	}
	else cout << "Empty sequence";
}