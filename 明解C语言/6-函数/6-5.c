/*
    计算幂
*/

#include <stdio.h>

//返回dx的no次幂（第二版）
double power(double dx, int no)
{
    double tmp = 1.0;

    while (no-- > 0)
        tmp *= dx;
    return (tmp);
}

int main(void)
{
    int n;
    double x;

    printf("请输入一个实数："); scanf("%lf", &x);
    printf("请输入一个整数："); scanf("%d", &n);

    printf("%.2f的%d次幂是%.2f。\n", x, n, power(x, n));

    return (0);
}