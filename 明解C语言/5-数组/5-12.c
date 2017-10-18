/*
    输入5名学生的分数并显示出60分以上学生的一览表
*/

#include <stdio.h>

#define NUMBER 5

int main(void)
{
    int i;
    int snum = 0;               //及格学生人数
    int tensu[NUMBER];          //NUMBER名学生的分数
    int succs[NUMBER];          //及格学生一览表（保存及格学生的下标）

    puts("请输入学生的分数。");
    for (i = 0; i < NUMBER; i++) {
        printf("%2d号：", i + 1);
        scanf("%d", &tensu[i]);
        if (tensu[i] >= 60)
            succs[snum++] = i;
    }

    puts("及格学生一览表");
    puts("------------");
    for (i = 0; i < snum; i++)
        printf("%2d号(%3d分)\n", succs[i] + 1, tensu[succs[i]]);

    return (0);
}