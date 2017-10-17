/*
    计算输入的非负整数的位数
*/

#include <stdio.h>

int main(void)
{
    int num;
    int dig;                            //位数

    do {
        printf("请输入一个非负整数：");
        scanf("%d", &num);

        if (num < 0)
            puts("\a请不要输入负整数。");
    } while (num < 0);
                                        //当num大于等于0时
    dig = 0;
    do {
        num = num / 10;                 //右移一位
        dig = dig + 1;
    } while (num > 0);
    printf("该整数的位数是%d。\n", dig);

    return (0);
}