/*
    从输入整数开始倒数到0
*/

#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    while (no >= 0) {
        printf("%d ", no);
        no--;               //no的值递减（减少1）
    }

    putchar('\n');             //换行

    return (0);
}