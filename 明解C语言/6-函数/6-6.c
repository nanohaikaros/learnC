/*
    返回4个整数中最大值的函数
*/

#include <stdio.h>

int maxof(int x, int y)
{
    if (x > y)
        return (x);
    else
        return (y);
}

//返回4个整数中的最大值
int max4(int w, int x, int y, int z)
{
    return (maxof(maxof(w, x), maxof(y, z)));
}

int main(void)
{
    int na, nb, nc, nd;

    puts("请输入4个整数。");
    printf("整数1："); scanf("%d", &na);
    printf("整数2："); scanf("%d", &nb);
    printf("整数3："); scanf("%d", &nc);
    printf("整数4："); scanf("%d", &nd);

    printf("最大值是%d。\n", max4(na, nb, nc, nd));

    return (0);

}