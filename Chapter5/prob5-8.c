#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int n[5];
    int i;
    int big = 0, small = 0, zero = 0;
    
    srand((unsigned)time(NULL));

    for(i = 0; i < 5; i++){
        n[i] = rand() % 21 - 10;
        printf("%d ", n[i]);
        if(n[i] > 0){
            big += 1;
        }else if(n[i] < 0){
            small += 1;
        }else{
            zero += 1;
        }
    }
    printf("\n");

    printf("0より大きい数：%d個\n", big);
    printf("0より小さい数：%d個\n", small);
    printf("0の個数：%d個\n", zero);
    
    return 0;
}