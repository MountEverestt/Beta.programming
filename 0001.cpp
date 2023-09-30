#include <stdio.h>
int main(){
    int score = 0, temp = 0;
    for (int i = 1; i <= 3; i++){
        scanf("%d", &temp);
        score += temp;
    }
    if(score< 101 && score >= 80){
        printf("A\n");
    }else if (score< 80 && score >= 75){
        printf("B+\n");
    }else if (score< 75 && score >= 70){
        printf("B\n");
    }else if (score< 70 && score >= 65){
        printf("C+\n");
    }else if (score< 65 && score >= 60){
        printf("C\n");
    }else if (score< 60 && score >= 55){
        printf("D+\n");
    }else if (score< 55 && score >= 50){
        printf("D\n");
    }else if (score< 50 && score >= 0){
        printf("F\n");
    }
}