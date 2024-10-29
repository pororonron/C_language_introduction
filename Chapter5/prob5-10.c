#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int n[5];
    int i,ast;

    srand((unsigned)time(NULL));

    for(i = 0; i < 5; i++){
        n[i] = rand() % 10 + 1;
        printf("%d ", n[i]);
    }
    printf("\n\n");

    for(i = 0; i < 5; i++){
        for(ast = 0; ast < n[i]; ast++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}