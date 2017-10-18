/*
    计算出1000以内的质数（第1版）
*/

#include <stdio.h>

int main(void)
{
    int i, no;
    unsigned long counter = 0;

    for (no = 2; no <= 1000; no++) {
        for (i = 2; i < no; i++) {
            counter++;
            if (no % i == 0)            //能被整除的不是质数
                break;                  //退出上述循环
        }
        if (no == i)                    //知道最后也未被整除
            printf("%d\n", no);
    }

    printf("乘除运算的次数：%lu\n", counter);

    return (0);
}