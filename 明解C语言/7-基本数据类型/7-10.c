/*
    以0.01为单位从0.0递增至1.0的循环（用整数控制）
*/

#include <stdio.h>

int main(void)
{
    int i;
    float x;

    for (i = 0; i <= 100; i++) {
        x = i / 100.0;
        printf("x = %f\n", x);
    }
        

    return (0);
}