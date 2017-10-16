/*
    编写一段程序，确认相等运算符和关系运算符结果是1和0
*/

#include <stdio.h>

int main(void)
{
    if ((1 == 1) == 1)
        puts("OK");
    if ((1 != 1) == 0)
        puts("OK");
}