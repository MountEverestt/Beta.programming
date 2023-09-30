#include<stdio.h>
int main(){
  	int num[9],a,b,c,d,e,f,g;
  	for(int i=0; i<9; i++){
  		scanf("%d", &num[i]);
	  }
	for(a=0; a<3; a++)
	for(b=a+1; b<4; b++)
	for(c=b+1; c<5; c++)
	for(d=c+1; d<6; d++)
	for(e=d+1; e<7; e++)
	for(f=e+1; f<8; f++)
	for(g=f+1; g<9; g++){
		if(num[a]+num[b]+num[c]+num[d]+num[e]+num[f]+num[g]==100){
			printf("%d\n", num[a]);
	  		printf("%d\n", num[b]);
	  		printf("%d\n", num[c]);
	  		printf("%d\n", num[d]);
	  		printf("%d\n", num[e]);
	  		printf("%d\n", num[f]);
	  		printf("%d", num[g]);
        }
	}
	return 0;	  
  }