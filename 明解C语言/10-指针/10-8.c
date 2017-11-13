/*
    将两个整数值升序排列
*/

#include <stdio.h>

//将nx、ny所指对象的值进行互换
void swap(int *nx, int *ny)
{
    int temp = *nx;
    *nx = *ny;
    *ny = temp;
}

//排列顺序为*n1<=*n2
void sort2(int *n1, int *n2)
{
    if (*n1 > *n2)
        swap(n1, n2);
}

int main(void)
{
    int na, nb;

    puts("请输入两个整数：");
    printf("整数A："); scanf("%d", &na);
    printf("整数B："); scanf("%d", &nb);

    sort2(&na, &nb);

    puts("将两数的值按升序排列。");
    printf("整数A是%d。\n", na);
    printf("整数B是%d。\n", nb);

    return (0);
}