/*
    输入学生的分数并显示出分布情况
*/

#include <stdio.h>

#define NUMBER 80

int main(void)
{
    int i, j;
    int num;                        //实际的人数
    int tensu[NUMBER];              //学生的分数
    int bunpu[11] = {0};            //分布图

    printf("请输入学生人数：");
    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("\a人数范围[1到%d]:", NUMBER);
    } while (num < 1 || num > NUMBER);

    puts("请输入学生的分数。");
    for (i = 0; i < num; i++) {
        printf("%2d号：", i + 1);
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("\a分数范围[0到100]:");
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }

    puts("\n□ 分布图 □");
    printf("      100:");
    for (j = 0; j < bunpu[10]; j++)
        putchar('*');
    putchar('\n');

    for (i = 9; i >= 0; i--) {
        printf("%3d - %3d:", i * 10, i * 10 + 9);
        for (j = 0; j < bunpu[i]; j++)
            putchar('*');
        putchar('\n');
    }

    return (0);
}