#include <stdio.h>
 
int main(void) {
    printf("文字列を入力してEnterボタンを押してください\n");
 
    int d;
    scanf("%d", &d);
 
    printf("入力された数値は：%d\n", d);
 
    return 0;
}