/*
    复制字符串（误例）
*/

#include <stdio.h>

//将字符串s复制到d
char *str_copy(char *d, const char *s)
{
    char *t = d;

    while (*d++ = *s++)
        ;
    return (t);
}

int main(void)
{
    char str[128] = "ABCD";
    char *ptr = "EFGH";

    printf("字符串str：");   scanf("%s", str);

    str_copy(ptr, str);

    puts("str复制到了ptr。");
    printf("str = %s\n", str);
    printf("ptr = %s\n", ptr);

    return (0);
}