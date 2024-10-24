#include <stdio.h>

int main(int argc,char** argv){
    int i;
    for(i = 1;i <= 5;i++){
        if(i == 2){
            continue;
        }
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}