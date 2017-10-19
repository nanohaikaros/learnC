/*
    显示出一个直角在左下方的直角三角形（函数版）
*/

#include <stdio.h>

//连续显示出no个
void put_starts(int no)
{
    while (no-- > 0)
        putchar('*');
}

int main(void)
{
    int i, ln;

    printf("三角形有几层：");
    scanf("%d", &ln);

    for (i = 1; i <= ln; i++) {
        put_starts(i);
        putchar('\n');
    }

    return (0);
}