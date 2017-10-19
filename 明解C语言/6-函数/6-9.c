/*
    逆向显示输入的非负整数
*/

#include <stdio.h>

//返回输入的非负整数
int scan_uint(void)
{
    int tmp;

    do {
        printf("请输入一个非负整数：");
        scanf("%d", &tmp);
        if (tmp < 0)
            puts("\a请不要输入负整数。");
    } while (tmp < 0);
    return (tmp);
}

//返回非负整数倒转后的值
int rev_int(int num)
{
    int tmp = 0;

    if (num > 0) {
        do {
            tmp = tmp * 10 + num % 10;
            num /= 10;
        } while (num > 0);
    }
    return (tmp);
}

int main(void)
{
    int nx = scan_uint();
    
    printf("该整数倒转后的值是%d。\n", rev_int(nx));

    return (0);
}