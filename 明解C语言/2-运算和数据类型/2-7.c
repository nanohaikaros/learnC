/*
    读取两个实数值，用实数表示出它们的和、差、积、商
*/

#include <stdio.h>

int main(void)
{
    double vx, vy;      //浮点数

    puts("请输入两个数。");
    printf("实数vx："); scanf("%lf", &vx);
    printf("实数vy："); scanf("%lf", &vy);

    printf("vx + vy = %f\n", vx + vy);
    printf("vx - vy = %f\n", vx - vy);
    printf("vx * vy = %f\n", vx * vy);
    printf("vx / vy = %f\n", vx / vy);

    return (0);
}