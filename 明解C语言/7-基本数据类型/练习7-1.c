/*
    编写程序确认：
        无符号整数位左移后的值乘以2的指数幂后的值。
        无符号整数位右移后的值乘以2的指数幂后的值。
*/

#include <stdio.h>

int main(void)
{
    unsigned x;
    printf("请输入一个非负整数：");
    scanf("%u", &x);
    
    printf("\n左移一位后的值：%u", x << 1);
    printf("\n乘以2的1次幂的值：%u", x * 2); 
    printf("\n左移两位后的值：%u", x << 2);
    printf("\n乘以2的2次幂的值：%u\n", x * 2 * 2); 
    
    printf("\n右移一位后的值：%u", x >> 1);
    printf("\n除以2的1次幂的值：%u", x / 2); 
    printf("\n右移两位后的值：%u", x >> 2);
    printf("\n除以2的2次幂的值：%u\n", x / 2 / 2);
    
    return(0);          
}