/*
    为两个变量赋整数值并显示
*/

#include <stdio.h>

int main(void)
{
    int vx, vy;     //vx和vy是int类型的变量

    vx = 57;        //把57赋给vx
    vy = vx + 10;   //把vx+10赋给vy

    printf("vx的值是%d。\n", vx);       //显示vx的值
    printf("vy的值是%d。\n", vy);       //显示vy的值

    return (0);
}