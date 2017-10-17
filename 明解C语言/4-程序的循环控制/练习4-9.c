/*
    编写一段程序，像右面这样按照升序显示出小于输入值的所有正偶数。

    请输入一个正整数：19
    2 4 6 8 10 12 14 16 18

*/

#include <stdio.h>

int main(void)
{
    int i, no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    i = 1;
    while (i <= no) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
    putchar('\n');

    return (0);
}