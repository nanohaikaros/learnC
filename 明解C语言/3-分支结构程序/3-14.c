/*
    计算输入的两个整数的差并显示（条件运算符）
*/

#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("请输入两个整数。");
    printf("整数1："); scanf("%d", &n1);
    printf("整数2："); scanf("%d", &n2);

    printf("它们的差是：%d。\n", (n1 > n2) ? n1 - n2 : n2 - n1);

    return (0);
}