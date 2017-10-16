/*
    对代码清单3-4中的程序进行修改，不使用if语句，而是改用switch语句来实现。
*/

#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    switch (no % 2) {
        case 0 : puts("输入的整数是偶数。"); break;
        case 1 : puts("输入的整数是奇数。"); break;
    }

    return (0);
}