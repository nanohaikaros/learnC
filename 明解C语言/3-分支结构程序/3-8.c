/*
    个位数是5吗
*/

#include <stdio.h>

int main(void)
{
    int vx;

    printf("请输入一个整数：");
    scanf("%d", &vx);

    if (vx % 10 == 5)
        puts("该整数的个位数是5。");

    return (0);
}