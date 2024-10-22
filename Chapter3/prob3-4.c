#include <stdio.h>
int main(int argc,char** argv){
    int num;
    printf("数を入力：");
    scanf("%d",&num);
    if(num <= 10 || 90 <= num){
        printf("10以下か90以上の値です\n");
    }
    return 0;
}