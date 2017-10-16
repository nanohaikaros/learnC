/*
    输入的两个整数相等吗（第二版）
*/

#include <stdio.h>

int main(void)
{
    int x1, x2;

    puts("请输入两个整数。");
    printf("整数1："); scanf("%d", &x1);
    printf("整数2："); scanf("%d", &x2);

    if (x1 != x2)
        puts("它们不相等。");
    else
        puts("它们相等。");

    return (0);
} 