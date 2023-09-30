#include<bits/stdc++.h>
using namespace std;
int main(){
	int A, B, C, a, b, c, d;
	scanf("%d %d %d", &A, &B, &C);
	if((B*B)-(4*A*C)<0){
		printf("No Solution");
	}
	for(a=1; a<=100; a++){
		if(A%a==0){
			c = A/a;
			for(b=-10000; b<=10000; b++){
				if(b==0) continue;
				if(C%b==0){
					d = C/b;
					if(a*d+b*c==B){
						cout << a << " "<< b << " "<< c<< " " << d;
						return 0;
					}
				}	
			}
		}
	}
	printf("No Solution");
	return 0;
}