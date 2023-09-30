#include<stdio.h>
#include<math.h>
#include<string.h>
  int main(){
  	char let[50], A, B, C;
  	int len[3]={ 1 , 0 , 0 }, s, i;
  	scanf("%s", &let);
	for(i=0; i<strlen(let); i++){
		if(let[i]=='A'){
			s=len[0];
			len[0]=len[1];
			len[1]=s;
		}
		else if(let[i]=='B'){
			s=len[1];
			len[1]=len[2];
			len[2]=s;
		}
		else{
			s=len[0];
			len[0]=len[2];
			len[2]=s;
		}
	}
	if(len[0]==1)printf("1");
	else if(len[1]==1)printf("2");
	else printf("3");
	}
