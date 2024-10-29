#include <stdio.h>

int main(int argc,char** argv){
    int n[] = { 5,4,3,2,1 };
    int i;
    for(i = 0; i < 5; i++){
        printf("n[%d]=%d ",i,n[i]);
    }
    printf("\n");
    return 0;
}