/*
    确认不带下标运算符是数组名的值（指向第一个元素的指针）
*/

#include <stdio.h>

int main(void)
{
    int vc[3];

    printf("vc:%p\n", vc);
    printf("vc[0]的地址:%p\n", &vc[0]);
    printf("vc[1]的地址:%p\n", &vc[1]);
    printf("vc[2]的地址:%p\n", &vc[2]);

    return (0);
}