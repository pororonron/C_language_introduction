#include <stdio.h>

int main(int argc,char** argv){
    int year;
    printf("年を入力：");
    scanf("%d",&year);
    if(year % 4 == 0 && year > 0){
        if(year % 400 == 0){
            printf("閏年です\n");
        }else if(year % 100 == 0){
            printf("閏年ではありません\n");
        }else{
            printf("閏年です\n");
        }
    }else if(year > 0){
        printf("閏年ではありません\n");
    }
    return 0;
}