#include <stdio.h>

int main(int argc,char** argv){
    int x,y;
    for(y = 1; y <= 9; y++){
        for(x = 1; x <= 9; x++){
            printf("%d*%d=%d ",x,y,x*y);
            if(x == 9){
                printf("\n");
            }
        }
    }
    return 0;
}