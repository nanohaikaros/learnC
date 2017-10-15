/*
    编写一段程序，像右面那样读取两个整数，然后输出它们的和以及积。

    请输入两个整数。
    整数A：54
    整数B：12
    它们的和是66，积是648。

*/

#include <stdio.h>

int main(void)
{
    int na, nb;

    puts("请输入两个整。");
    printf("整数A："); scanf("%d", &na);
    printf("整数B："); scanf("%d", &nb);

    printf("它们的和是%d，积是%d。\n", na + nb, na * nb);

    return (0);
}