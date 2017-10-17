/*
    编写一段程序，向右面这样读取一个整数，并纵向显示出读取的整数个*。如果输入的是0以下的整数，则不显示任何内容。

    请输入一个整数：3
    *
    *
    *

*/

#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    while (no-- > 0)
        puts("*");
    putchar('\n');

    return (0);
}