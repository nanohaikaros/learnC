/*
    以十进制、二进制、八进制和十六进制形式显示0~65535 
*/

#include <stdio.h>

// 返回在整数x中设置的位数
int count_bits(unsigned x)
{
    int count = 0;
    while (x) {
        if (x & 1U)    count++;
        x >>= 1;
    }    
    return (count);
} 

// 返回unsigned型的位数
int int_bits(void)
{
    return (count_bits(~0U));    
} 

// 显示unsigned型的位串内容
void print_nbits(unsigned x, unsigned n)
{
    int i = int_bits();
    i = (n < i) ? n - 1 : i - 1;
    for (; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1' : '0');     
} 

int main(void)
{
    unsigned i;
    
    for (i = 0; i <= 65535U; i++) {
        printf("%5u ", i);
        print_nbits(i, 16);
        printf(" %06o %04X\n", i, i);
    } 

    return (0);   
}