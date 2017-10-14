/*
    编写一段程序，想右面那样读取一个整数并显示改整数加上10之后的结果。

    请输入一个整数：57
    该整数加上10的结果是67。

*/

#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    printf("该整数加上10的结果是%d。", 10 + no);

    return (0);
}