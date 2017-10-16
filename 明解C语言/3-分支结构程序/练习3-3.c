/*
    编写一段程序，像右面那样输入一个整数值，显示出它的绝对值。

    请输入一个整数：-8
    绝对值是8。

*/

#include <stdio.h>

int main(void)
{
    int no;
    
    printf("请输入一个整数：");
    scanf("%d", &no);

    if (no <= 0)
        printf("绝对值是%d。", -no);
    else
        printf("绝对值是%d。", no);

    return (0);
}