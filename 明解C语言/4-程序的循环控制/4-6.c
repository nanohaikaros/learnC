/*
    计算并显示从1到5的和（使用复合赋值运算符和后置递增运算符）
*/

#include <stdio.h>

int main(void)
{
    int no = 1;
    int sum = 0;

    do {
        sum += no;          //给sum的值加上no
        no++;            //no的值递增（增加1）
    } while (no <= 5);

    printf("1到5的合计值是%d。\n", sum);

    return (0);
}