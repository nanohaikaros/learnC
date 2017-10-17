/*
    使用复合赋值运算符/=，对代码清单4-2中的程序进行修改。
*/

#include <stdio.h>

int main(void)
{
    int num;

    do {
        printf("请输入一个非负整数：");
        scanf("%d", &num);

        if (num < 0)
            puts("请不要输入负整数。");
    } while (num < 0);

    printf("该整数逆向显示的结果是");
                                    //当num大于等于0的时候
    do {
        printf("%d", num % 10);     //显示最后一位数
        num /= 10;                  //右移一位
    } while (num > 0);

    puts("。");

    return (0);
}