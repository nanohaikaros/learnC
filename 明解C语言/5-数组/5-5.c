/*
    从头开始顺次为数组各元素进行初始化（1、2、3、4、5）并进行显示
*/

#include <stdio.h>

int main(void)
{
    int i;
    int vc[5] = {1, 2, 3, 4, 5};

    for (i = 0; i < 5; i++)
        printf("vc[%d] = %d\n", i , vc[i]);

    return (0);
}