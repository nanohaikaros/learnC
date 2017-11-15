/*
    字符串赋值（？）
*/

#include <stdio.h>

int main(void)
{
    char str[] = "ABC";
    char *ptr = "123";

    str = "DEF";        //错误：不能这样赋值
    ptr = "456";        //正确：指向另一个字符串字面量

    printf("str = \"%s\"\n", str);
    printf("ptr = \"%s\"\n", ptr);

    return (0);
}