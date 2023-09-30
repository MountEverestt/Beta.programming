#include<stdio.h>
#include<math.h>
int main(){
	float num, distance;
	scanf("%f %f", &num, &distance);
	if(distance>=num && 1<=num<=1000 && 1<=distance<=1000) printf("%d", int(ceil(distance/num)));
	else printf("2");
	return 0;
}
