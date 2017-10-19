/*
    编写一段程序，为数组中的全部元素分配静态存储期，并确认它们都被初始化为0
*/

#include <stdio.h>

int ax = 0;

int main()
{
    static int bx =0;
    int i;

    puts("ax bx");
    for (i = 0; i < 5; i++) 
        printf("%d%3d\n", ax++, bx++);

    return 0;
}