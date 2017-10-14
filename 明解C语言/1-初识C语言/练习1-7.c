/*
    编写一段程序，像右面这样显示读取到的两个整数的乘积。

    输入两个整数。
    整数1：27
    整数2：35
    它们的乘积是945。

*/

#include <stdio.h>

int main(void)
{
    int n1, n2, wa;

    puts("输入两个整数。");

    printf("整数1：");     scanf("%d", &n1);
    printf("整数2：");     scanf("%d", &n2);

    wa = n1 * n2;

    printf("它们的乘积是%d。", wa);

    return (0);

}