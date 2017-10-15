/*
    读取两个整数的值，然后显示出它们的和、差、积、商、和余数
*/

#include <stdio.h>

int main(void)
{
    int vx, vy;

    puts("请输入两个整数。");
    printf("整数1："); scanf("%d", &vx);
    printf("整数2："); scanf("%d", &vy);

    printf("vx + vy = %d\n", vx + vy);
    printf("vx - vy = %d\n", vx - vy);
    printf("vx * vy = %d\n", vx * vy);
    printf("vx / vy = %d\n", vx / vy);
    printf("vx %% vy = %d\n", vx % vy);

    return (0);
}