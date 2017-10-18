/*
    对代码清单5-6中的程序进行修改，将数组va中的元素按照倒序复制到数组vb中。
*/

#include <stdio.h>

int main(void)
{
    int i;
    int va[5] = {15, 20, 25};
    int vb[5];

    for (i = 0; i < 5; i++)
        vb[i] = va[4 - i];

    puts(" va vb");
    puts("-------");
    for (i = 0; i < 5; i++)
        printf("%3d%3d\n", va[i], vb[i]);

    return (0);
}