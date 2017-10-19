/*
    计算两个整数的平方差
*/

#include <stdio.h>

//返回平方
int sqr(int x)
{
    return (x * x);
}

//返回差值
int diff(int x, int y)
{
    return (x > y ? x - y : y - x);
}

int main(void)
{
    int kx, ky, kx2, ky2;

    puts("请输入两个整数。");
    printf("整数kx："); scanf("%d", &kx);
    printf("整数ky："); scanf("%d", &ky);

    kx2 = sqr(kx);      //kx的平方
    ky2 = sqr(ky);      //ky的平方

    printf("kx和ky的平方差是%d。\n", diff(kx2, ky2));

    return (0);
}