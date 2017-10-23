/*
    求出数组的元素个数 
*/

#include <stdio.h>

int main(void)
{
    int vi[10];
    double vd[25];
    
    printf("数组vi的元素个数 = %u\n", (unsigned)(sizeof(vi) / sizeof(vi[0])));
    printf("数组vd的元素个数 = %u\n", (unsigned)(sizeof(vd) / sizeof(vd[0])));
    
    return (0);
}