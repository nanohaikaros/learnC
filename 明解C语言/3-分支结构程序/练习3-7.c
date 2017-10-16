/*
    使用if语句替代代码清单3-14程序中的条件运算符，实现同样功能。
*/

#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("请输入两个整数。");
    printf("整数1："); scanf("%d", &n1);
    printf("整数2："); scanf("%d", &n2);

    if (n1 > n2)
        printf("它们的差是：%d。\n", n1 - n2);
    else
        printf("它们的差是：%d。\n", n2 - n1);

    return (0);
}