/*
    输入规定个数个整数并显示出它们的合计值和平均值（使用for语句）
*/

#include <stdio.h>

int main(void)
{
    int i = 0;
    int sum = 0;            //合计值
    int num, tmp;

    printf("要输入多少个整数：");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("NO.%d:", i + 1);
        scanf("%d", &tmp);
        sum += tmp;
    }

    printf("合计值：%d\n", sum);
    printf("平均值：%.2f\n", (double)sum / num);

    return (0);
}