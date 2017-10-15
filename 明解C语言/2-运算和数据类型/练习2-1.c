/*
    编写一段程序，像右面那样读取两个整数，然后显示出前者是后者的百分之几。

    请输入两个整数。
    整数A：54
    整数B：84
    A的值是B的64%。

*/

#include <stdio.h>

int main(void)
{
    float vx, vy;  

    puts("请输入两个整数。");

    printf("整数A："); scanf("%f", &vx);
    printf("整数B："); scanf("%f", &vy);

    printf("A的值是B的%.f%%。", vx / vy * 100);

    return (0);
}