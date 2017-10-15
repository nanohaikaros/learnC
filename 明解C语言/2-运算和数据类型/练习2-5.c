/*
    编写一段程序，像下面那样读取两个整数的值，计算出前者时后者的百分之几，并用实数输出结果。

    请输入两个整数。
    整数A：54
    整数B：84
    A的值是B的64。285714%。

*/

#include <stdio.h>

int main(void)
{
    int vx, vy;  

    puts("请输入两个整数。");

    printf("整数A："); scanf("%d", &vx);
    printf("整数B："); scanf("%d", &vy);

    printf("A的值是B的%f%%。", (double) vx * 100 / vy );

    return (0);
}