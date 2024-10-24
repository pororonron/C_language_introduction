#include <stdio.h>

int main(int argc,char** argv){
    int i;
    for(i = 12 ; i > 0 ; i-=3){
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}