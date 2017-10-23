/*
    编写rrotate函数，返回无符号整数x右移n位后的值
        unsigned rrotate(unsigned x, int n) {...}
    编写lrotate函数，返回无符号整数x左移n位后的值  
        unsigned lrotate(unsigned x, int n) {...}
*/

#include <stdio.h>

// 返回无符号整数右移n位后的值
unsigned rrotate(unsigned x, int n)
{
    return (x >> n);         
}

// 返回无符号整数左移n位后的值
unsigned lrotate(unsigned x, int n)
{
    return (x << n);         
}

int main(void)
{
    unsigned x;
    printf("请输入一个非负整数：");
    scanf("%u", &x);
    
    printf("\n右移一位后的值：%u", rrotate(x, 1));
    printf("\n右移两位后的值：%u", rrotate(x, 2));
    printf("\n左移一位后的值：%u", lrotate(x, 1));
    printf("\n左移两位后的值：%u\n", lrotate(x, 2));
    
    return(0);          
}