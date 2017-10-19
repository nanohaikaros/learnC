/*
    确认默认的初始化
*/

#include <stdio.h>

int fx;             //静态存储期（被初始化为0）

int main(void)
{
    static int sx;  //静态存储期（被初始化为0）
    int ax;         //自动存储期（被初始化为不确定的值）

    printf("ax = %d\n", ax);
    printf("sx = %d\n", sx);
    printf("fx = %d\n", fx);

    return (0);
}