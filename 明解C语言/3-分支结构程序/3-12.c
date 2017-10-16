/*
    计算输入的三个整数中的最大值并显示
*/

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, max;

    puts("请输入三个整数。");
    
    printf("整数1："); scanf("%d", &n1);
    printf("整数2："); scanf("%d", &n2);
    printf("整数3："); scanf("%d", &n3);

    max = n1;
    if (n2 > max) max = n2;
    if (n3 > max) max = n3;

    printf("较大的数是：%d。\n", max);
    
    return (0);
}