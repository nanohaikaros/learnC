/*
    整数的平方和浮点数的平方（函数）
*/

#include <stdio.h>

//int型整数的平方值
int sqr_int(int x)
{
    return (x * x);
}

//double型浮点数的平方值
double sqr_double(double x)
{
    return (x * x);
}

int main(void)
{
    int nx;
    double dx;

    printf("请输入一个整数：");
    scanf("%d", &nx);
    printf("该数的平方是%d。\n", sqr_int(nx));

    printf("请输入一个实数：");
    scanf("%lf", &dx);
    printf("该数的平方是%d。\n", sqr_double(dx));

    return (0);
}