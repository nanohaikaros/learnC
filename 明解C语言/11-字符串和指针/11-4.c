/*
    用数组实现的字符串和用指针实现的字符串（其二）
*/

#include <stdio.h>

int main(void)
{
    char str[6] = "ABC";     //用数组实现的字符串
    char *ptr = "123";      //用指针实现的字符串

    printf("str = \"%s\"\n", str);
    printf("ptr = \"%s\"\n", ptr);

    return (0);
}