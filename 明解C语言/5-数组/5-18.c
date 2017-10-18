/*
    计算出1000以内的质数（第4版）
*/

#include <stdio.h>

int main(void)
{
    int i, no;
    int prime[500];                         //用来保存质数的数组
    int ptr = 0;                            //已经得到的质数个数
    unsigned long counter = 0;

    prime[ptr++] = 2;                       //2是质数
    prime[ptr++] = 3;                       //3也是质数

    for (no = 5; no <= 1000; no += 2) {       //只是把奇数作为判断对象
        for (i = 1; i < ptr; i++) {   //尝试能否被已经得到的质数整除
            counter++;
            if (no % prime[i] == 0)            //能被整除的不是质数
                break;                  //退出上述循环
        }
        if (ptr == i)                    //知道最后也未被整除
            prime[ptr++] = no;          //添加到数组中
    }

    for (i = 0; i < ptr; i++)
        printf("%d\n", prime[i]);

    printf("乘除运算的次数：%lu\n", counter);

    return (0);
}