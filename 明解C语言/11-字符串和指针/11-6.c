/*
    判断字符串的长度（指针版）
*/

#include <stdio.h>

//返回字符串s的长度
size_t str_length(const char *s)
{
    size_t len = 0;

    while (*s++)
        len++;
    return (len);
}

int main(void)
{
    char st[100];

    printf("请输入字符串：");
    scanf("%s", st);

    printf("字符串%s的长度为%u。\n", st, (unsigned)str_length(st));

    return (0);
}