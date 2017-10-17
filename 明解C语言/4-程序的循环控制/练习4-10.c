/*
    编写一段程序，像右面这样显示出小于输入整数的所有2的乘方。

    请输入一个整数：19
    2 4 8 16

*/

#include <stdio.h>

int main(void)
{
    int i, no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    i = 2;
    while (i < no) {
        printf("%d ", i);
        i *= 2;
    }
        
    putchar('\n');

    return (0);
}