#include <stdio.h>

int main(int argc,char** argv){
    int num;
    printf("数を入力：");
    scanf("%d",&num);
    if(num != 1){
        printf("１ではありません\n");
    }
    return 0;
}