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
    printf("5以上の数 : ");
    for(i = 0; i < 10; i++){
        if(data[i] >= 5){
            printf("%d ",data[i]);
        }
    }
    printf("\n");
    printf("5未満の数 : ");
    for(i = 0; i < 10; i++){
        if(data[i] < 5){
            printf("%d ",data[i]);
        }
    }
    printf("\n");
    return 0;
}