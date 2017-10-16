/*
    输入的整数是奇数吗
*/

#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    if (no % 2)
        puts("输入的整数是奇数。");

    return (0);
}