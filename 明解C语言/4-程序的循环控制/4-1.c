/*
    输入的整数是奇数还是偶数呢（根据自己的意愿进行循环操作）
*/

#include <stdio.h>

int main(void)
{
    int cont;

    do {
        int no;

        printf("请输入一个整数：");
        scanf("%d", &no);

        if (no % 2)
            puts("这个数是奇数。");
        else
            puts("这个数是偶数。");

        printf("要重复一次吗？ 【YES···0 / NO···9】：");
        scanf("%d", &cont);
    } while (cont == 0);

    return (0);
}