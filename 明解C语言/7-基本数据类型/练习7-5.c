/*
    编写程序确认对无符号整数执行算术运算不会发生数据溢出 
*/

#include <stdio.h>

int main(void)
{
    unsigned x;
    printf("请输入一个大于65535的非负整数：");
    scanf("%u", &x);
    
    printf("\n得到的数是：%u\n", x);
    return (0);    
}
