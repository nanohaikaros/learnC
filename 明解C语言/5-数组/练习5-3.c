/*
    对代码清单5-5中的程序进行修改，从头开始依次使用5、4、3、2、1进行赋值。
*/

#include <stdio.h>

int main(void)
{
    int i;
    int vc[5] = {5, 4, 3, 2, 1};

    for (i = 0; i < 5; i++)
        printf("vc[%d] = %d\n", i , vc[i]);

    return (0);
}