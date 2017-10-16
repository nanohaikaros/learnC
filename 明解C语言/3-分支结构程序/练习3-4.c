/*
    编写一段程序，像右面那样输入两个整数，如果两数值相等，则显示“A和B相等。”。如果A大于B，则显示“A大于B。”。如果A小于B，则显示“A小于B。”。

    请输入两个整数。
    整数A：12
    整数B：6
    A大于B。

*/

#include <stdio.h>

int main(void)
{
    int a, b;

    puts("请输入两个整数。");
    
    printf("整数A："); scanf("%d", &a);
    printf("整数B："); scanf("%d", &b);

    if (a > b)
        puts("A大于B。");
    else if (a < b)
        puts("A小于B。");
    else
        puts("A和B相等。");

    return (0);
}