/*
    显示输入整数除以3的余数
*/

#include <stdio.h>

int main(void)
{
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    if (num % 3 == 0)
        puts("该数能被3整除。");
    else if (num % 3 == 1)
        puts("该数除以3的余数是1。");
    else
        puts("该数除以3的余数是2。");

    return (0);
}