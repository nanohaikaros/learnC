/*
    保存字符串的数组
*/

#include <stdio.h>

int main(void)
{
    char str[4];    //保存字符串的数组

    str[0] = 'A';   //赋值
    str[1] = 'B';   //赋值
    str[2] = 'C';   //赋值
    str[3] = '\0';  //赋值

    printf("字符串str为%s。\n", str);    //显示

    return (0);
}