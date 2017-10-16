/*
    显示输入月份所处的季节
*/

#include <stdio.h>

int main(void)
{
    int month;      //月

    printf("请输入月份：");
    scanf("%d", &month);

    if (month >= 3 && month <= 5)
        puts("是春天。");
    else if (month >= 6 && month <= 8)
        puts("是夏天。");
    else if (month >= 9 && month <= 11)
        puts("是秋天。");
    else if (month == 1 || month == 2 ||month == 12)
        puts("是冬天。");
    else
        puts("输入的月份不存在！！\a");

    return (0);
}