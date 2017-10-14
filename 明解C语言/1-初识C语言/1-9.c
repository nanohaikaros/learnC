/*
    显示并确认输入的整数值
*/

#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);       //读取整数的值

    printf("您输入的是%d。\n", no);

    return (0);
}