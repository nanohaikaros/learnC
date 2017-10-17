/*
    对代码清单4-8的程序进行修改，使其不是递减到0而是递减到1为止。
*/

#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    while (no >= 1)
        printf("%d ", no--);             //no的值在显示后递减

    putchar('\n');

    return (0);
}