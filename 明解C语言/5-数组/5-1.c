/*
    输入5名学生的分数并显示出它们的总分和平均分
*/

#include <stdio.h>

int main(void)
{
    int uchida;
    int satoh;
    int sanaka;
    int hiraki;
    int masaki;
    int sum = 0;

    puts("请输入分数。");
    printf("1号："); scanf("%d", &uchida);
    printf("2号："); scanf("%d", &satoh);
    printf("3号："); scanf("%d", &sanaka);
    printf("4号："); scanf("%d", &hiraki);
    printf("5号："); scanf("%d", &masaki);

    sum += uchida;
    sum += satoh;
    sum += sanaka;
    sum += hiraki;
    sum += masaki;

    printf("总分：%5d\n", sum);
    printf("平均分：%5.1f\n", (double)sum / 5);

    return (0);
}