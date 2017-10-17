/*
    计算并显示从1到5的和
*/

#include <stdio.h>

int main(void)
{
    int no = 1;
    int sum = 0;

    do {
        sum = sum + no;
        no = no + 1;
    } while (no <= 5);

    printf("1到5的合计值是%d。\n", sum);

    return (0);
}