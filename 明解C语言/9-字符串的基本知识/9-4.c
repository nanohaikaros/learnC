/*
    询问名字并显示问候语（读取字符串）
*/

#include <stdio.h>

int main(void)
{
    char name[40];

    printf("请输入您的名字：");
    scanf("%s", name);

    printf("您好，%s 先生/女士！！\n", name);

    return (0);
}