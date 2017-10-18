/*
    假设变量a是double型，变量b是int型，请说明经过下述赋值后a和b的值分别是多少。

    a = b = 1.5;

*/

//  a = 1.000000;    b = 1;

#include <stdio.h>

int main(void)
{
    double a;
    int b;

    a = b = 1.5;

    printf("a = %f\nb = %d", a, b);

    return (0);
}