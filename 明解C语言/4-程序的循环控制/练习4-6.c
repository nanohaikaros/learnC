/*
    对代码清单4-7中的程序进行修改，当输入值为负数的时候不执行换行操作。
*/

#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);
    
    if (no >= 0) {
        while (no >= 0) {
            printf("%d ", no);
            no--;               //no的值递减（减少1）
        }
    
        putchar('\n');             //换行
    }
    

    return (0);
}