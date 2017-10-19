/*
    编写一段程序，使用二维数组操作5名学生3个科目（语文、数学、英语）的分数，完成如下处理。
    例1：计算每科的最高分。
    例2：计算每名学生3个科目的平均分。
*/

#include <stdio.h>

#define NUMBER 5
#define COUNT 3

int max_of(int vc[], int no)
{
    int i;
    int max = vc[0];
    for (i = 1; i < no; i++)
        if (vc[i] > max)
            max = vc[i];
    return (max);
}

double avg_of(double vc, int no)
{
    return (vc / no);
    
}

int main(void)
{
    int i, j;
    int vc[NUMBER][COUNT];
    int chi[NUMBER];
    int eng[NUMBER];
    int mat[NUMBER];
    int max_c, max_e, max_m;
    int avg[NUMBER];


    printf("请输入%d名学生的分数。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        puts("语文、数学、英语：");
        for (j = 0; j < COUNT; j++) {
            putchar('=');
            scanf("%d", &vc[i][j]);
        }
    }

    for (i = 0; i < NUMBER; i++) {
        chi[i] = vc[i][0];
        eng[i] = vc[i][1];
        mat[i] = vc[i][2];

    }

    max_c = max_of(chi, NUMBER);
    max_e = max_of(eng, NUMBER);         
    max_m = max_of(mat, NUMBER);         

    printf("语文的最高分=%d\n", max_c);
    printf("英语的最高分=%d\n", max_e);
    printf("数学的最高分=%d\n", max_m);

    
        for (i = 0; i < NUMBER; i++){
            avg[i] = vc[i][0] + vc[i][1] + vc[i][2];
            printf("%d平均分:%.2f\n", i, avg_of(avg[i], COUNT));
        }
    
    

    return (0);
}