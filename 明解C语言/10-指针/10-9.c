/*
    将两个实数值进行互换（误例）
*/

#include <stdio.h>

//将nx、ny所指对象进行互换
void swap(int *nx, int *ny)
{
    int temp = *nx;
    *nx = *ny;
    *ny = temp;
}

int main(void)
{
    double dx, dy;

    puts("请输入两个实数。");
    printf("实数X："); scanf("%lf", &dx);
    printf("实数Y："); scanf("%lf", &dy);

    swap(&dx, &dy);

    puts("互换了两数的值。");
    printf("实数A是%f。\n", dx);
    printf("实数B是%f。\n", dy);

    return (0);
}