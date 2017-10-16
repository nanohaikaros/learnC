/*
    使用条件运算符替换练习3-5程序中的if语句，实现同样功能。
*/

#include <stdio.h>

int main(void)
{
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    (num) ? puts("该整数不是0。") : puts("该整数是0。");

    return (0);
}