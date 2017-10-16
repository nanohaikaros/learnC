/*
    确认switch语句动作的程序
*/

#include <stdio.h>

int main(void)
{
    int sw;

    printf("请输入一个整数：");
    scanf("%d", &sw);

    switch (sw) {
        case 1 : puts("A"); puts("B"); break;
        case 2 : puts("C");
        case 5 : puts("D"); break;
        case 6 :
        case 7 : puts("E"); break;
        default : puts("F"); break;
    }

    return (0);
}