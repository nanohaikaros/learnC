/*
    对代码清单4-3中的程序进行修改，在输出结果的同时显示出输入的整数。

    请输入一个非负整数：1963
    1963的位数是4。

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

    printf("%d", num);
                                        //当num大于等于0时
    dig = 0;
    do {
        num = num / 10;                 //右移一位
        dig = dig + 1;
    } while (num > 0);
    printf("该整数的位数是%d。\n", dig);

    return (0);
}