/*
    编写一段程序，像右面这样显示读取到的三个整数的和。

    请输入三个整数。
    整数1：7
    整数2：15
    整数3：23
    它们的和是45。

*/

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, wa;

    puts("请输入三个整数。");

    printf("整数1：");     scanf("%d", &n1);
    printf("整数2：");     scanf("%d", &n2);
    printf("整数3：");     scanf("%d", &n3);

    wa = n1 + n2 + n3;

    printf("它们的和是%d。", wa);

    return (0);

}