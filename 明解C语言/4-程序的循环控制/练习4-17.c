/*
    对代码清单4-18和代码清单4-19中的程序进行修改，分别显示出直角在左上方和右上方的直角三角形。
*/

#include <stdio.h>

int main(void)
{
    int i, j, ln;

    printf("三角形有几层：");
    scanf("%d", &ln);

    for (i = 1; i <= ln; i++) {
        for (j =1; j <= ln-i+1; j++)
            putchar('*');
        putchar('\n');
    }

    return (0);
}

#include <stdio.h>

int main(void)
{
    int i, j, ln;

    printf("三角形有几层：");
    scanf("%d", &ln);

    for (i = 1; i <= ln; i++) {
        for (j = 1; j <= i; j++)
            putchar(' ');
        for (j = 1; j <= ln - i + 1; j++)
            putchar('*');
        putchar('\n');
    }

    return (0);
}