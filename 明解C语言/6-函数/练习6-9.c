/*
    创建一个函数，对元素个数为no的int类型数组v2进行倒序排列，并将其结果保存在数组v1中。
        void intary_rcpy (int v1[], const int v2[], int no) {...}
*/

#include <stdio.h>

#define NUMBER 5

void intary_rcpy(int v1[], const int v2[], int no){

    int i;

    for (i = 0; i < no; i++)
        v1[i] = v2[no - 1 -i];
    
}

int main(void)
{
    int i;
    int v2[NUMBER];
    int v1[NUMBER];

    printf("输入%d个数组元素。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("输入%d：", i);
        scanf("%d", &v2[i]);
    }

    intary_rcpy(v1, v2, NUMBER);
    for (i = 0; i < NUMBER; i++)
        printf("v1[%d]=%d\n", i, v1[i]);
    
    return 0;
}