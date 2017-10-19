/*
    返回两个整数中较大值的函数
*/

#include <stdio.h>

//返回较大整数的值
int maxof(int x, int y)
{
    if (x > y)
        return (x);
    else
        return (y);
}

int main(void)
{
    int na, nb;

    puts("请输入两个整数。");
    printf("整数1："); scanf("%d", &na);
    printf("整数2："); scanf("%d", &nb);

    printf("较大整数的值是%d。\n", maxof(na, nb));

    return (0);

}