#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int a[3][3];
    int m, n;

    srand((unsigned)time(NULL));

    for(m = 0; m < 3; m++){
        for(n = 0; n < 3; n++){
            a[m][n] = rand() % 10;
            printf("%d ", a[m][n]);
        }
        printf("\n");
    }
    return 0;
}