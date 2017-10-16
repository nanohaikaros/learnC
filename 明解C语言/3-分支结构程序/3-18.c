/*
    显示输入整数除以3的余数（switch语句）
*/

#include <stdio.h>

int main(void)
{
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    switch(num % 3) {
        case 0 : puts("该数能被3整除。"); break;
        case 1 : puts("该数除以3的余数是1。"); break;
        case 2 : puts("该数除以3的余数是2。"); break;
    }

    return (0);
}