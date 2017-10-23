/*
    编写set函数，返回将无符号整数x的第pos位设为1后的值
        unsigned set(unsigned x, int pos) {...}
    编写reset函数，返回将无符号整数x的第pos位设为0后的值 
        unsigned reset(unsigned x, int pos) {...}
    编写inverse函数，返回将无符号整数x的第pos位取反后的值
        unsigned inverse(unsigned x, int pos) {...}
*/

#include <stdio.h>

// 返回将无符号整数x的第pos位设为1后的值
unsigned set(unsigned x, int pos)
{
   return x = x | (1U << pos - 1);       
}

// 返回将无符号整数x的第pos位设为0后的值
unsigned reset(unsigned x, int pos)
{
   return x = x & (~(1U << pos - 1));       
}

// 回将无符号整数x的第pos位取反后的值
unsigned inverse(unsigned x, int pos)
{
   return x ^= 1U << pos - 1;         
}


int main(void)
{
   unsigned x;
   int pos;
   printf("请输入一个非负整数：");
   scanf("%u", &x);
   printf("请输入第几位：");
   scanf("%d", &pos);
   
   printf("\n%u的第%d位设为1后的值：%u", x, pos, set(x, pos));
   printf("\n%u的第%d位设为0后的值：%u", x, pos, reset(x, pos)); 
   printf("\n%u的第%d位取反后的值 ：%u\n", x, pos, inverse(x, pos));   
   
   return(0);          
}