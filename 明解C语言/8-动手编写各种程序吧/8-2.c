/*
    整数的平方和浮点数的平方（函数式宏）
*/

#include <stdio.h>

#define sqr(x) ((x) * (x))      //计算x的平方

int main(void)
{
    int nx;
    double dx;

    printf("请输入一个整数：");
    scanf("%d", &nx);
    printf("该数的平方是%d。\n", sqr(nx));

    printf("请输入一个实数：");
    scanf("%lf", &dx);
    printf("该数的平方是%d。\n", sqr(dx));

    return (0);
}