/*
    从0递增显示到输入的正整数为止（使用for语句）
*/

#include <stdio.h>

int main(void)
{
    int i, no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    for (i = 0; i <= no; i++)
        printf("%d ", i);
    putchar('\n');

    return (0);
}