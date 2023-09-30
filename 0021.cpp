#include<stdio.h>
#include<string.h>
int main(){
	char let[100];
	int i;
    gets(let);
	for(i=0; i<strlen(let); i++){
		if(let[i]=='a' || let[i]=='e' || let[i]=='i' || let[i]=='o' || let[i]=='u'){
			printf("%c", let[i]);
			i=i+2;
		}
		else printf("%c", let[i]);
	}
	return 0;
}