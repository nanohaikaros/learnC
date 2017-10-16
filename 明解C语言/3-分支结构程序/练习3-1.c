/*
    编写一段程序，像右面这样输入两个整数值，如果后者是前者的约数，则显示“B是A的约数”，如果不是，则显示“B不是A的约数”。

    请输入两个整数。
    整数A：12
    整数B：6
    B是A的约数。

*/

#include <stdio.h>

int main(void)
{
    int a, b;

    puts("请输入两个整数。");
    
    printf("整数A："); scanf("%d", &a);
    printf("整数B："); scanf("%d", &b);

    if (a % b)
        puts("B不是A的约数。");
    else
        puts("B是A的约数。");

    return (0);
}