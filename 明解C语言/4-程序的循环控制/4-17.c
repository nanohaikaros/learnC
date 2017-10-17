/*
    描绘一个长方形
*/

#include <stdio.h>

int main(void)
{
    int i, j;
    int width, height;

    puts("让我们来描绘一个长方形。");
    printf("宽："); scanf("%d", &width);
    printf("长："); scanf("%d", &height);

    for (i = 1; i <= height; i++) {         //长方形有height行
        for (j = 1; j <= width; j++)        //显示width个*
            putchar('*');
        putchar('\n');                  //换行
    }

    return (0);
}