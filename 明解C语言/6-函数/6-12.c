/*
    将数组的所有元素设置为0
*/

#include <stdio.h>

//把0赋值给有no个元素的数组vc的所有元素

void int_set(int vc[], int no)
{
    int i;

    for (i = 0; i < no; i++)
        vc[i] = 0;
}

int main(void)
{
    int i;
    int ary1[] = {1, 2, 3, 4, 5};
    int ary2[] = {3, 2, 1};

    int_set(ary1, 5);           //把0赋值给数组ary1的所有元素
    int_set(ary2, 3);           //把0赋值给数组ary2的所有元素

    for (i = 0; i < 5; i++) printf("ary1[%d] = %d\n", i, ary1[i]);
    for (i = 0; i < 3; i++) printf("ary2[%d] = %d\n", i, ary2[i]);

    return (0);
}