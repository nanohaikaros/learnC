/*
    使用代码清单6-3中的sqr函数创建另一个函数，返回int型整数的四次幂
        int pow4 (int x) {...}
*/

#include <stdio.h>

//返回平方
int sqr(int x)
{
    return (x * x);
}

int pow4(int x)
{
    return (sqr(x) * sqr(x));
}

int main(void)
{
    int x;

    printf("输入一个整数：");
    scanf("%d", &x);

    printf("四次幂是：%d。\n", pow4(x));
}