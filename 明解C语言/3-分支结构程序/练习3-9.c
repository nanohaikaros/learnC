/*
    编写一段程序，像右面这样输入三个整数，如果三个数都相等，则显示“三个值都相等”。如果其中任意两个值相等，则显示“有两个值相等”。如果上述两种情况都不满足，则显示“三个值各不相同”。

    请输入三个整数。
    整数A：12
    整数B：6
    整数C：12
    有两个值相等。

*/

#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    puts("请输入三个整数。");
    printf("整数A："); scanf("%d", &n1);
    printf("整数B："); scanf("%d", &n2);
    printf("整数C："); scanf("%d", &n3);

    if (n1 == n2 && n2 == n3)
        puts("三个值都相等");
    else if (n1 == n2 || n2 == n3 || n3 == n1)
        puts("有两个值相等");
    else
        puts("三个值各不相同");

    return (0);
}