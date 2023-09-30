#include<stdio.h>
#include<string.h>
int main(){
	char let[1005][35], s[35];
	int i, j, n, l;
	scanf("%d", &n);
	for( i=0; i<n; i++){
		scanf("%s", let[i]);
	}
	for( i=0; i<n; i++){
		for( j=0; j<n; j++){
			if(strcmp(let[i],let[j])<0){
				strcpy(s,let[i]);
				strcpy(let[i],let[j]);
				strcpy(let[j],s);
			}
		}
	}
	for(i=0;i<n;i++){
        if(strcmp(let[i],let[i+1])!=0){
            printf("%s\n",let[i]);
        }
    }
    return 0;
}
	
