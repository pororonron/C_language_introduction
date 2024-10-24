#include <stdio.h>

int main(int argc,char** argv){
    int i,j,k;
    for(i = 1; i <= 10; i++){
        for(j = 1; j < i + 1; j++){
            printf("■");
        }
        for(k = 10; k> i; k--){
            printf("□");
        }
        printf("\n");
    }
    return 0;
}