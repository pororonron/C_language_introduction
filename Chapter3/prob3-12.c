#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 21 - 10;
    printf("数値：%d\n",n);
    if(n < 0){
        printf("負の値です\n");
    }else if(n > 0){
        printf("正の値です\n");
    }else{
        printf("0です\n");
    }
    return 0;
}