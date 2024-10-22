#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int a, b;
    srand((unsigned)time(NULL));
    a = rand() % 10 + 1;
    b = rand() % 10 + 1;
    printf("数値：a=%d b=%d\n",a,b);
    if(a > b){
        printf("aのほうが大きいです。\n");
    }else if(a < b){
        printf("bのほうが大きいです。\n");
    }else{
        printf("等しいです\n");
    }
    return 0;
}