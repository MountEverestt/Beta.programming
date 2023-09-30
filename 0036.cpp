#include<bits/stdc++.h>
using namespace std;
int main(){
	long double s=1, m=1, k;
	int i, num;
	cin >> num;
	if(num%2==1){
		for(i=num/2+1; i<=num ;i++) s*=i;//5!/(2!*3!)-->(5*4*3)/(1*2*3);
		for(i=1; i<=(num+1)/2; i++) m*=i;
	k = s/m*2; 
	printf("%.0Lf", k);
	}
	else{
 		for(i=num/2+1; i<=num ;i++) s*=i;
		for(i=1; i<=num/2; i++) m*=i;	
	k = s/m;
	printf("%.0Lf", k);
	}
	return 0;
}
