#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int n[5];
    int i;
    srand((unsigned)time(NULL));

    n[0] = rand() % 10 + 1;
    int sum = n[0];
    int avg = n[0];
    printf("%d ", n[0]);

    for(i = 1; i < 5; i++){
        n[i] = rand() % 10 + 1;
        printf("%d ", n[i]);
        sum += n[i];
    }
    printf("\n");

    avg = sum / 5;
    printf("合計値：%d\n",sum);
    printf("平均値：%d\n\n",avg);

    printf("平均値より大きい数：");
    for(i = 0; i < 5; i++){
        if(n[i] > avg){
            printf("%d ", n[i]);
        }
    }
    printf("\n");

    printf("平均値より小さい数：");
    for(i = 0; i < 5; i++){
        if(n[i] < avg){
            printf("%d ", n[i]);
        }
    }
    printf("\n");
    return 0;
}