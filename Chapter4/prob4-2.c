#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc,char** argv){
    int n;
    int i = 1;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    printf("数:%d\n",n);
    while(i <= n){
        printf("*");
        i++;
    }
    printf("\n");
    return 0;
}