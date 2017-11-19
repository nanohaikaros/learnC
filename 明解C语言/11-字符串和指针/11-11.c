#include <string.h>

// 将字符串s2添加到s1之后  
char *strcat(char *s1, const char *s2)  
{  
    char *tmp = s1;  
      
    while (*s1)    s1++;            // 前进到s1的末尾处   
    while (*s1++ = *s2++);          // 循环复制直至遇到s2中的‘\0’   
    return (tmp);        
}   
  
// 将字符串s2的前n个字符复制到s1   
char *strcat(char *s1, const char *s2, size_t n)  
{  
    char *tmp = s1;  
    while (*s1)    s1++;                   // 前进到s1的末尾处   
    while (n--)  
        if (!(*s1++ = *s2++))    break;    // 遇到 ‘\0’就结束循环   
    *s1 = '\0';                            // 在s1的末尾插入‘\0’   
    return (tmp);  
}  