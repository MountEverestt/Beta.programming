#include<stdio.h>
int main(){
	int n, i, j, k, l, let=0;
	scanf("%d", &n); 
	for(i=1; i<=n; i++){
		for(j=0; j<=16; j++){
		for(k=0; k<=11; k++){
		for(l=0; l<=5; l++){
			if(6*j+9*k+20*l==i){
		    	printf("%d\n", i);
				j=17;
				k=12;
				l=6;
				let=1;
			}
		}	
		}	
		}
	}
	if(let==0) printf("no");
	return 0;
}
