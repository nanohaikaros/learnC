/*
    显示各种整数数据类型的表示范围
*/

#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("char : %d ~ %d\n", CHAR_MIN, CHAR_MAX);
    printf("short int : %d ~ %d\n", SHRT_MIN, SHRT_MAX);
    printf("int : %d ~ %d\n", INT_MIN, INT_MAX);
    printf("long int : %d ~ %d\n", LONG_MIN, LONG_MAX);

    return (0);
}