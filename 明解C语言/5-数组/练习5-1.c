/*
    对代码清单5-3中的程序进行修改，从头顺次为数组中的元素赋值0、1、2、3、4。
*/

#include <stdio.h>

int main(void)
{
    int i;
    int vc[5];

    for (i = 0; i < 5; i++)
        vc[i] = i;

    for (i = 0; i < 5; i++)
        printf("vc[%d] = %d\n", i , vc[i]);

    return (0);
}