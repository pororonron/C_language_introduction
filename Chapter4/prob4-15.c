#include <stdio.h>

int main(int argc,char** argv){
    int n;
    for(n = 1; n <= 100; n++){
        printf("%d ",n);
        if(n % 10 == 0){
            printf("\n");
        }
    }
    return 0;
}