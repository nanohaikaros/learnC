/*
    编写一段程序，向右面这样根据输入整数后，循环显示1234567890，显示的位数和输入的整数值相同。

    请输入一个整数：25
    1234567890123456789012345

*/

#include <stdio.h>

int main(void)
{
    int i, j, no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    i = no / 10;
    j = no % 10;

    while (i--)
        printf("1234567890");
    for (i = 1; i <= j; i++)
        printf("%d", i);

    return (0);
}