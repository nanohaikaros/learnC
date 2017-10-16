/*
    对代码清单3-16中的程序进行修改，不使用if语句，而是改用switch语句来实现。
*/

#include <stdio.h>

int main(void)
{
    int month;      

    printf("请输入月份：");
    scanf("%d", &month);

    switch (month){
        case 3 :
        case 4 :
        case 5 : puts("是春天。"); break;
        case 6 :
        case 7 :
        case 8 : puts("是夏天。"); break;
        case 9 :
        case 10 :
        case 11 : puts("是秋天。"); break;
        case 1 :
        case 2 :
        case 12 : puts("是冬天。"); break;
        default : puts("输入的月份不存在！！\a"); break;
    }

    return (0);
}