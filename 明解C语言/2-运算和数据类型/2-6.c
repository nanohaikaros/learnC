/*
    整数和浮点数
*/

#include <stdio.h>

int main(void)
{
    int nx;     //整数
    double dx;  //浮点数

    nx = 9.99;
    dx = 9.99;

    printf("int   型变量nx的值：%d\n", nx);          //9
    printf("           nx / 2：%d\n", nx / 2);      //9/2
    
    printf("double型变量dx的值：%f\n", dx);          //9.99
    printf("           dx / 2.0：%f\n", dx / 2);      //9.99/2.0

    return (0);
}