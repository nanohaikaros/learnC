/*
    顺序查找（哨兵查找法）
*/

#include <stdio.h>

#define NUMBER 5
#define FAILED -1

//通过哨兵查找法顺序查找
int search(int vc[], int key, int no)
{
    int i = 0;

    vc[no] = key;

    while (1) {
        if (vc[i] == key)
            break;
        i++;
    }

    return (i == no ? FAILED : i);
}

int main(void)
{
    int i, ky, idx;
    int vx[NUMBER+1];

    for (i = 0; i < NUMBER; i++) {
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }
    printf("要查找的值：");
    scanf("%d", &ky);

    idx = search(vx, ky, NUMBER);

    if (idx == FAILED)
        puts("\a查找失败。");
    else
        printf("%d是数组的第%d元素。\n", ky, idx + 1);

    return (0);
}