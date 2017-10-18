/*
    输入5名学生的分数并显示出其中的最高分和最低分
*/

#include <stdio.h>

#define NUMBER 5

int main(void)
{
    int i;
    int tensu[NUMBER];
    int max, min;

    puts("请输入学生的分数。");
    for (i = 0; i < NUMBER; i++) {
        printf("%3d号：", i + 1);
        scanf("%d", &tensu[i]);
    }

    min = max = tensu[0];
    for (i = 1; i < NUMBER; i++) {
        if (tensu[i] > max) max = tensu[i];
        if (tensu[i] < min) min = tensu[i];
    }

    printf("最高分：%d\n", max);
    printf("最低分：%d\n", min);

    return (0);

}