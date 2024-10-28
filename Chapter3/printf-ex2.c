#include <stdio.h>

int main(int argc,char** argv){
    char s[32] = "";
    printf("abcのいずれかを入力:");
    scanf("%[abc]",s);
    printf("入力された値 = %s\n",s);
    return 0;
}