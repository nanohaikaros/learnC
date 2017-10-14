/*
    编写一段程序，向右面那样读取一个整数并显示该整数减去10之后的结果。

    请输入一个整数：57
    该整数减去10的结果是47。
*/

#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    printf("该整数减去10的结果是%d。", no - 10);

    return (0);
}