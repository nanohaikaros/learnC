/*
    对代码清单4-17中的程序进行修改，显示出一个横向较长的长方形。

    让我们来画一个长方形。
    一边：3
    另一边：7
    *******
    *******
    *******

*/

#include <stdio.h>

int main(void)
{
    int i, j;
    int width, height;

    puts("让我们来描绘一个长方形。");
    printf("一边："); scanf("%d", &height);
    printf("另一边："); scanf("%d", &width);

    for (i = 1; i <= height; i++) {
        for (j = 1; j <= width; j++)
            putchar('*'); 
        putchar('\n');
    }

    return (0);
}