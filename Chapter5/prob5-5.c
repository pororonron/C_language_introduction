#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc,char** argv){
    int data[10];
    int i;
    srand((unsigned)time(NULL));
    for(i = 0; i < 10; i++){
        data[i] = rand() % 10 + 1;
        printf("%d ",data[i]);
    }
    printf("\n\n");
    printf("3の倍数 : ");
    for(i = 0; i < 10; i++){
        if(data[i] % 3 == 0){
            printf("%d ",data[i]);
        }
    }
    printf("\n3の倍数以外の数 : ");
    for(i = 0; i < 10; i++){
        if(data[i] % 3 != 0){
            printf("%d ",data[i]);
        }
    }
    printf("\n");
    return 0;
}