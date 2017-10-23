/*
    以0.01为单位从0.0递增至1.0的循环
*/

#include <stdio.h>

int main(void)
{
    float x;

    for (x = 0.0; x <= 1.0; x += 0.01)
        printf("x = %f\n", x);

    return (0);
}