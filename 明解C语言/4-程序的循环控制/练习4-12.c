/*
    使用for语句对代码清单4-6中的程序进行修改，计算1到5的和。
*/

#include <stdio.h>

int main(void)
{
    int no = 1;
    int sum = 0;

    for (; no <= 5; ++no)
        sum += no;

    printf("1到5的合计值是%d。\n", sum);

    return (0);
}