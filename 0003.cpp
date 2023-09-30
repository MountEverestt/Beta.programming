#include<stdio.h>
main()
{
	int mat1[100][100],mat2[100][100],i,j,x,y,m,n,o,p;//mat1 = matrix 100*100
	scanf("%d %d",&i,&j);
	for(x=0;x<i;x++){
		for(y=0;y<j;y++){
			scanf("%d",&mat1[x][y]);//show number in matrix1
		}
	}
	for(m=0;m<i;m++){
		for(n=0;n<j;n++){
			scanf("%d",&mat2[m][n]);//show number in matrix2
		}
	}
	for(o=0;o<i;o++){
		for(p=0;p<j;p++){
			printf("%d\v",mat1[o][p]+mat2[o][p]);//matrix1 + matrix2
		}
		printf("\n");
	}
}
