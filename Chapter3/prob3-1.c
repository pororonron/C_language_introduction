#include <stdio.h>

int main(int argc,char** argv){
    int num;
    printf("数を入力：");
    scanf("%d",&num);
    if(5 <= num){
        printf("5以上です\n");
    }
    return 0;
}