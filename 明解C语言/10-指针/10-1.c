/*
    计算两个整数的和与差（误例）
*/

#include <stdio.h>

void sum_diff(int n1, int n2, int sum, int diff)
{
    sum = n1 + n2;
    diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}

int main(void)
{
    int na, nb;
    int wa = 0, sa = 0;

    puts("请输入两个整数：");
    printf("整数A："); scanf("%d", &na);
    printf("整数B："); scanf("%d", &nb);

    sum_diff(na, nb, wa, sa);

    printf("两数之和是%d。\n两数之差是%d。\n", wa, sa);

    return (0);
}