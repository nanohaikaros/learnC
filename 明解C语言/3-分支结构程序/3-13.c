/*
    计算输入的两个整数中的最大值并显示（条件运算符）
*/

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, max;

    puts("请输入两个整数。");
    
    printf("整数1："); scanf("%d", &n1);
    printf("整数2："); scanf("%d", &n2);

    max = (n1 > n2) ? n1 : n2;          //将较大的值赋给max

    printf("较大的数是：%d。\n", max);
    
    return (0);
}