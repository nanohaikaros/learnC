/*
    创建一个函数，返回两个int型整数中较小数的值。
        int minof (int x, int y) {...}
    为了确认函数的动作，还需要大家创建一个合适的main函数来组成一段完整的程序（之后的练习也是如此）。
*/

#include <stdio.h>

//返回较小整数的值
int minof(int x, int y)
{
    int min = x;

    if (y < min) min = y;

    return (min);
}

int main(void)
{
    int na, nb;

    puts("请输入两个整数。");
    printf("整数1："); scanf("%d", &na);
    printf("整数2："); scanf("%d", &nb);

    printf("较小整数的值是%d。\n", minof(na, nb));

    return (0);

}