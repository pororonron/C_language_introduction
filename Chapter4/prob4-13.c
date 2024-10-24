#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc,char** argv){
    int n,i;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    if(n >= 5){
        for(i = 1; i <= n; i++){
            printf("★ ");
        }
    }else{
        printf("発生した数値:%d",n);
    }
    printf("\n");
    return 0;
}