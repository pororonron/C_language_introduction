#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int n[5];
    int i;

    srand((unsigned)time(NULL));

    for(i = 0; i < 5; i++){
        n[i] = rand() % 100 + 1;
        printf("%d ", n[i]);
    }
    printf("\n\n");

    printf("0以上60未満：");
    for(i = 0; i < 5; i++){
        if(0 <= n[i] && n[i] < 60){
            printf("%d ", n[i]);
        }
    }
    printf("\n");

    printf("60以上80未満：");
    for(i = 0; i < 5; i++){
        if(60 <= n[i] && n[i] < 80){
            printf("%d ", n[i]);
        }
    }
    printf("\n");

    printf("80以上：");
    for(i = 0; i < 5; i++){
        if(i[n] >= 80){
            printf("%d ", n[i]);
        }
    }
    printf("\n");

    return 0;
}