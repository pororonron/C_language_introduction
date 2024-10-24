#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc,char** argv){
    int n,i;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    printf("数:%d\n",n);
    for(i = 1; i <= n; i++){
        printf("*");
    }
    printf("\n");
    return 0;
}