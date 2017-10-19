/*
    创建一个函数，返回三个int型整数中的最小值
        int min3 (int x, int y, int z) {...}
*/

#include <stdio.h>

//返回三个整数中的最小值
int min3(int x, int y, int z)
{
    int min = x;
    if (y < min) min = y;
    if (z < min) min = z;

    return (min);
}

int main(void)
{
    int na, nb, nc;

    puts("请输入三个整数。");
    printf("整数1："); scanf("%d", &na);
    printf("整数2："); scanf("%d", &nb);
    printf("整数3："); scanf("%d", &nc);

    printf("最小值是%d。\n", min3(na, nb, nc));

    return (0);

}