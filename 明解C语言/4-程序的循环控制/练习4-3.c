/*
    编写一段程序，像右面这样读取两个整数的值，然后计算出它们之间所有整数的和。

    请输入两个整数。
    整数1：37
    整数2：28
    大于等于28小于等于37的所有整数的和是325。

*/

#include <stdio.h>

int main(void)
{
    int a, b;
    int sum = 0;

    puts("请输入两个整数。");
    printf("整数1："); scanf("%d", &a);
    printf("整数2："); scanf("%d", &b);

    if (a > b) {
        printf("大于等于%d小于等于%d的所有整数的和是", b, a);
        
        do {
            sum = sum + b;
            b = b + 1;
        } while (b <= a);
    
        printf("%d。", sum);
    }
    else {
        printf("大于等于%d小于等于%d的所有整数的和是", a, b);
        
        do {
            sum = sum + a;
            a = a + 1;
        } while (a <= b);
    
        printf("%d。", sum);
    }

    return (0);
}