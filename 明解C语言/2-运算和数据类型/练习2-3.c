/*
    编写一段程序，像右面那样显示出读取的实数的值。

    请示如一个实数：57.3
    你输入的是57.300000。

*/

#include <stdio.h>

int main(void)
{
    double no;

    printf("请示如一个实数：");
    scanf("%lf", &no);

    printf("你输入的是%f。", no);

    return (0);
}