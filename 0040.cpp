#include<stdio.h>
#include<string.h>
int main(){
	char num[15][1005];
	int i, let;
	scanf("%d", &let);
	for(i=0; i<let; i++){
		scanf("%s", &num[i]);
	}
	for(i=0; i<let; i++){
		if(num[i][0]-48==2 && strlen(num[i])==1) printf("T\n");
		else if(num[i][strlen(num[i])-1]%2==0) printf("F\n");
		else printf("T\n");
	}
	return 0;
}