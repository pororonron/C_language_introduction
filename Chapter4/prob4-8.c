#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc,char** argv){
    int n;
    srand((unsigned)time(NULL));
    while(1){
        n = rand() % 10 + 1;
        printf("%d\n",n);
        if(n == 10){
            break;
        }
    }
    printf("終了します\n");
    return 0;
}