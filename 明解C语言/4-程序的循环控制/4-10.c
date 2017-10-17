/*
    输入一个整数，连续显示出该整数个*
*/

#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    while (no-- > 0)
        putchar('*');
    putchar('\n');

    return (0);
}