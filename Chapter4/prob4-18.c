#include <stdio.h>

int main(int argc,char** argv){
    int i,j,k;
    for(i = 1; i <= 10; i++){
        for(j = 1; j < i; j++){
            printf("■");
        }
        printf("□");
        for(k = 10; k > j; k--){
            printf("■");
        }
        printf("\n");
    }
    return 0;
}