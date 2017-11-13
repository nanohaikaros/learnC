/*
    将两个整数值互换
*/

#include <stdio.h>

//将nx、ny指向的对象的值互换
void swap(int *nx, int *ny)
{
    int temp = *nx;
    *nx = *ny;
    *ny = temp;
}

int main(void)
{
    int na, nb;

    puts("请输入两个整数：");
    printf("整数A："); scanf("%d", &na);
    printf("整数B："); scanf("%d", &nb);

    swap(&na, &nb);

    puts("互换了两数的值：");
    printf("整数A是：%d。\n", na);
    printf("整数B是：%d。\n", nb);

    return (0);
}