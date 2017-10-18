/*
    依次把1、2、3、4、5赋值给数组每个元素并显示（使用for语句）
*/

#include <stdio.h>

int main(void)
{
    int i;
    int vc[5];

    for (i = 0; i < 5; i++)
        vc[i] = i + 1;

    for (i = 0; i < 5; i++)
        printf("vc[%d] = %d\n", i , vc[i]);

    return (0);
}