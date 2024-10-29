#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int a[3][3];
    int m,n;

    srand((unsigned)time(NULL));

    a[0][0] = rand() % 10;
    int max = a[0][0], min = a[0][0];
    printf("%d ", a[0][0]);

    for(m = 0; m < 3; m++){
        for(n = 0; n < 3; n++){
            if(m == 0 && n == 0){
                continue;
            }
            a[m][n] = rand() % 10;
            printf("%d ", a[m][n]);
            if(a[m][n] > max){
                max = a[m][n];
            }else if(a[m][n] < min){
                min = a[m][n];
            }
        }
        printf("\n");
    }
    printf("\n");

    printf("最大値：%d\n", max);
    printf("最小値：%d\n", min);

    return 0;
}