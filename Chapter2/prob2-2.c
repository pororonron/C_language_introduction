#include <stdio.h>

int main(int argc, char** argv){
    int a,b;								
	printf("a=");						//	キーボードからの入力を促す
	scanf("%d",&a);						//	キーボードから一文字入力
    printf("b=");
    scanf("%d",&b);

	printf("長方形の幅： %d\n",a);
    printf("長方形の高さ： %d\n",b);
    printf("長方形の面積は、%dm2です。\n",a*b);
    return 0;
}