/*
    编写一段程序，像右面这样显示出身高和标准体重的对照表。显示的身高范围和间隔由输入的整数值进行控制，标准体重精确到小数点后2位。

    开始数值（cm）：150
    结束数值（cm）：190
    间隔数值（cm）：5
    150cm   45.00kg
    155cm   49.50kg
    ...

*/

#include <stdio.h>

int main(void)
{
    int i, j, no;
    double k;

    printf("开始数值（cm）：");    scanf("%d", &i);
    printf("结束数值（cm）：");    scanf("%d", &j);
    printf("间隔数值（cm）：");    scanf("%d", &no);

    for (; i <= j; i += no) {
        k = (i - 100) * 0.9;
        printf("%d  %.2f\n", i, k);
    }

    return (0);
}