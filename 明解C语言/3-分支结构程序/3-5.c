/*
    输入的整数值是否为0
*/

#include <stdio.h>

int main(void)
{
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    if (num)
        puts("该整数不是0。");
    else
        puts("该整数是0。");

    return (0);
}