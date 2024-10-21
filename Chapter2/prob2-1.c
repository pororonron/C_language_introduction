#include <stdio.h>

int main(int argc, char** argv){
    int a,b;								
	printf("a=");						//	キーボードからの入力を促す
	scanf("%d",&a);						//	キーボードから一文字入力
    printf("b=");
    scanf("%d",&b);

	printf("a + b = %d\n",a+b);
    printf("a - b = %d\n",a-b);
    printf("a * b = %d\n",a*b);
    printf("a / 2 = %d\n",a/b);
    printf("a %% b = %d\n",a%b);
    return 0;
}