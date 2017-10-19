/*
    创建一个函数，对元素个数为no的int类型数组vc进行倒序排列。
        void rev_intary(int vc[], int no) {...}
*/

#include <stdio.h>

#define NUMBER 5

void rev_intary(int vc[],int no){

    int i, temp;

    for (i = 0; i < no / 2; i++) {
        temp = vc[i];
        vc[i] = vc[no - i - 1];
        vc[no - i - 1] = temp;
    }
}

int main(void)
{
    int i;
    int vc[NUMBER];

    printf("输入%d个数组元素。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("输入%d：", i);
        scanf("%d", &vc[i]);
    } 

    rev_intary(vc, NUMBER);
    for (i = 0; i < NUMBER; i++)
        printf("vc[%d]=%d\n", i, vc[i]);
    
    return 0;
}