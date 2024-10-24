#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc,char** argv){
    int n,i;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    if(n % 2 == 0){
        for(i = 1; i <= n; i++){
            printf("★ ");
        }
    }else{
        for(i = 1; i <= n; i++){
            printf("☆ ");
        }
    }
    printf("\n");
    return 0;
}