#include <string.h>

//返回字符串s的长度
size_t strlen(const char *s)
{
    size_t len = 0;

    while (*s++)
        len++;
    return (len);
}