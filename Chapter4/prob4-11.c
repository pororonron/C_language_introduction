#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc,char** argv){
    int n,i;
    int max = 1;
    srand((unsigned)time(NULL));
    for(i = 1; i <= 5; i++){
        n = rand() % 100 + 1;
        printf("%d\n",n);
        if(max < n){
            max = n;
        }
    }
    printf("最大値:%d\n",max);
    return 0;
}