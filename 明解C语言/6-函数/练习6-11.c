/*
    编写一段程序，使用二维数组操作5名学生3个科目（语文、数学、英语）的分数，完成如下处理。
    例1：计算每科的最高分。
    例2：计算每名学生3个科目的平均分。
*/

#include <stdio.h>

// 计算每科最高分，保存到数组s 
void h_score(int m[5][3], int s[3])
{
    int i, j;
    
    for (i = 0; i < 3; i++) {
        
        s[i] = m[0][i];
        
        for (j = 1; j < 5; j++)
            s[i] = s[i] > m[j][i] ? s[i] : m[j][i];
    }             
}

// 计算每名学生3个科目的平均分，保存到数组a
void a_score (int m[5][3], float a[5])
{
    int i, j;
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++)
            a[i] += m[i][j];   
        a[i] /= 3;
    } 
}

int main(void)
{
    int i, j;
    int m[5][3];
    int max[3];
    float ave[5] = {0};
    
    for (i = 0; i < 5; i++) {
        printf("请输入第%d名同学的成绩：\n", i + 1);
        for (j = 0; j < 3; j++) {
            switch (j) {
                case 0 : printf("语文:"); scanf("%d", &m[i][j]); break;
                case 1 : printf("数学:"); scanf("%d", &m[i][j]); break;
                case 2 : printf("英语:"); scanf("%d", &m[i][j]); break;
            }
        }
    }
    
    h_score(m, max);
    a_score (m, ave);
    
    putchar('\n');
    
    for (j = 0; j < 3; j++) {
        switch (j) {
                case 0 : printf("语文的最高分是:%d\n", max[j]); break;
                case 1 : printf("数学的最高分是:%d\n", max[j]); break;
                case 2 : printf("英语的最高分是:%d\n", max[j]); break;
            }
    }
    
    putchar('\n');
    
    for (i = 0; i < 5; i++)
        printf("第%d名学生的平均分数是:%.2f\n", i + 1, ave[i]);
        
    return (0);      
}