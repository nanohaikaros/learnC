/*
    编写一段程序，输入一个整数，像右面这样显示出输入整数层的金字塔形状。

    让我们来描绘一个金字塔。
    金字塔有几层：3
      *
     ***
    *****

*/

#include <stdio.h>

int main(void)
{
    int i, j, n;

    puts("让我们来描绘一个金字塔。");
    printf("金字塔有几层：");
    scanf("%d", &n);

    for (i = 1; i <= n + i - 1; i++) {
        for (j = 1; j <= n - 1; j++) {
            putchar(' ');
        }
        for (j = 1; j <= i; j++) {
            putchar('*');
        }
        for (j = 1; j < i; j++) {
            putchar('*');
        }
        n--;
        putchar('\n');
    }

    return (0);
}