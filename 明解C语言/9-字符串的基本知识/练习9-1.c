/*
    将代码清单9-3中数组str的声明改为：
        char str[] = "ABC\0DEF"
    查看程序运行结果。
*/

#include <stdio.h>

int main(void)
{
    char str[] = "ABC\0DEF";     //初始化

    printf("字符串str为%s。\n", str);    //显示

    return (0);
}