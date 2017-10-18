/*
    计算出1000以内的质数（第3版）
*/

#include <stdio.h>

int main(void)
{
    int i, no;
    unsigned long counter = 0;

    no = 2;
    printf("%d/n", no++);               //2是偶数中唯一的质数

    for (; no <= 1000; no += 2) {       //只是把奇数作为判断对象
        for (i = 3; i < no; i += 2) {   //只判断是否被奇数整除
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