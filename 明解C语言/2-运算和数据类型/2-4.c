/*
    对读取的整数进行符号取反操作，并输出结果
*/

#include <stdio.h>

int main(void)
{
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    printf("符号去反后的值是%d。\n", -num);      //单目运算符

    return (0);
}