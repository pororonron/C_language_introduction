#include <stdio.h>

int main(int argc,char** argv){
    int num;
    printf("数を入力：");
    scanf("%d",&num);
    if(num >= 20 && num < 80){
        printf("20以上80未満です\n");
    }
    return 0;
}