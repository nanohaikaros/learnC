/*
    用“数组实现的字符串”的数组和“用指针实现的字符串”的数组
*/

#include <stdio.h>

int main(void)
{
    int i;
    char st[3][6] = {"Turbo", "NA", "DOHC"};
    char *pt[3] = {"12345", "12", "1234"};

    for (i = 0; i < 3; i++)
        printf("st[%d] = \"%s\"\n", st[i]);
    
    for (i = 0; i < 3; i++)
        printf("pt[%d] = \"%s\"\n", pt[i]);

    return (0);
}