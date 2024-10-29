#include <stdio.h>

int main(int argc,char** argv){
    double d[] = { 1.2,-1.3,5.2,4.8 };
    int i;
    for(i = 0; i < 4; i++){
        printf("d[%d]=%.1lf ",i,d[i]);
    }
    printf("\n");
    return 0;
}