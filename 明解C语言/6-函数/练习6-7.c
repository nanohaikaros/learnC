/*
    创建一个函数，返回元素个数为no的int型数组vc中的最小值。
        int min_of(const int vc[], int no) {...}
*/

#include <stdio.h>

#define NUMBER 3

int min_of(const int vc[], int no)
{
    int i;
    int min = vc[0];
    for (i = 1; i < no; i++)
        if (vc[i] < min)
            min = vc[i];
    return (min);
}

int main(void)
{
    int i, min;
    int vc[NUMBER];

    puts("请输入整数：");
    for (i = 0; i < NUMBER; i++) {
        printf("整数%d:",i+1);
        scanf("%d",&vc[i]);
    }

    min = min_of(vc, NUMBER);

    printf("vc数组中最小值=%d。\n", min);

    return (0);
}