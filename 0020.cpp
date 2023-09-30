#include<bits/stdc++.h>
using namespace std;
int main(){
	int num[5][4],i,j,score[5];
	for(i=0;i<5;i++){
		scanf("%d %d %d %d",&num[i][0],&num[i][1],&num[i][2],&num[i][3]);
		score[i]=num[i][0]+num[i][1]+num[i][2]+num[i][3];
	
	}
	int max=score[0];
	for(i=0;i<5;i++){
		if(score[i]>max) max=score[i];
	}
	for(i=0;i<5;i++){
		if(score[i]==max) printf("%d %d",i+1,max);
	}
}
	