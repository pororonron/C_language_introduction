#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc,char** argv){
    int data[10];
    int i;

    srand((unsigned)time(NULL));
    
    data[0] = rand() % 10 + 1;
    int max = data[0], min = data[0];
    printf("%d ", data[0]);

    for(i = 1; i < 10; i++){
        data[i] = rand() % 10 + 1;
        printf("%d ",data[i]);
        if(data[i] >= max){
            max = data[i];
        }else if(data[i] <= min){
            min = data[i];
        }
    }
    printf("\n\n最大値 : %d\n",max);
    printf("最小値 : %d\n",min);
    return 0;
}