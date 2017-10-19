/*
    创建一个函数，返回int型整数的立方。
        int cube (int x) {...}
*/

#include <stdio.h>

int cube(int x)
{
    return (x * x * x);
}

int main(void)
{
    int x;

    printf("输入一个整数：");
    scanf("%d", &x);

    printf("立方是：%d。\n", cube(x));
}