#include<stdio.h>
int main(){
	int day, month, sum;
	scanf("%d %d", &day, &month);
	if(month==1){
		sum = day;
	}
	else if(month==2){
		sum = 31+day;
	}
	else if(month==3){
		sum = 59+day;
	}
	else if(month==4){
		sum = 90+day;
	}
	else if(month==5){
		sum = 120+day;
	}
	else if(month==6){
		sum = 151+day;
	}
	else if(month==7){
		sum = 181+day;
	}
	else if(month==8){
		sum = 212+day;
	}
	else if(month==9){
		sum = 243+day;
	}
	else if(month==10){
		sum = 273+day;
	}
	else if(month==11){
		sum = 304+day;
	}
	else {
		sum = 334+day;
	}
	int a = sum%7;
	if(a==0) printf("Wednesday");
	else if(a==1) printf("Thursday");
	else if(a==2) printf("Friday");
	else if(a==3) printf("Saturday");
	else if(a==4) printf("Sunday");
	else if(a==5) printf("Monday");
	else printf("Tuesday");
	return 0;
}
