/*
    输入的整数能被5整除吗
*/

#include <stdio.h>

int main(void)
{
    int vx;

    printf("请输入一个整数：");
    scanf("%d", &vx);

    if (vx % 5)
        puts("输入的整数不能被5整除。");
    else
        puts("输入的整数能被5整除。");

    return (0);
}