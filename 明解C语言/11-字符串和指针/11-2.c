/*
    将数组实现的字符串和用指针实现的字符串的相同点
*/

#include <stdio.h>

int main(void)
{
    int i;
    char str[] = "ABC";
    char *ptr = "123";

    for (i = 0; str[i]; i++)
        putchar(str[i]);            //str[i]是第一个字符之后的第i个元素
    putchar('\n');

    for (i = 0; ptr[i]; i++)
        putchar(ptr[i]);            //ptr[i]是第一个字符之后的第i个元素
    putchar('\n');

    printf("str = \"%s\"\n", str);  //str是指向第1个字符的指针
    printf("ptr = \"%s\"\n", ptr);  //ptr是指向di1个字符的指针

    return (0);
}