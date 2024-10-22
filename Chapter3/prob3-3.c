#include <stdio.h>

int main(int argc,char** argv){
    int num;
    printf("数を入力：");
    scanf("%d",&num);
    if(num < 50){
        printf("50未満です\n");
    }
    return 0;
}