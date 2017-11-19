/* 
    不使用下标运算符，编写如下函数，删除字符串str中的所有数字字符（例如，将传入的“AB1C9”变为“ABC”）。
    void del_digit(char *str) {...}  
*/  
  
#include <stdio.h>  
  
// 返回字符串长度  
  
int length(const *str)   
{  
    int len = 0;  
    while (*str++)    len++;  
    return (len);   
}  
  
// 去除字符串中的数字  
void del_digit(char *s)  
{     
    char *p = s;  
      
    while (*p)  
        if ((*p >= '0') && (*p <= '9'))  
            p++;  
        else  
            *s++ = *p++;  
    *s = '\0';      
}   
  
int main()  
{  
    char s[100];  
      
    printf("请输入字符串：");    scanf("%s", s);  
      
    printf("输入的字符串是：%s。\n", s);  
      
    del_digit(s);  
    printf("去数的字符串是：%s。\n", s);  
  
    return (0);      
}  