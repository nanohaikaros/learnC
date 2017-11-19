/* 
    不使用下标运算符，编写如下函数，返回字符串str中字符c的个数 （若不存在，则为0）。  
    int str_chnum(const char *str, char c) {...}
*/  
  
#include <stdio.h>  
  
int str_chnum(const char *str, char c)  
{  
    int n = 0;  
      
    while (*str) {  
        if (c == *str++)    n++;  
    }      
    return (n);  
}  
  
int main(void)  
{  
    char str[100];  
    char c;  
      
    printf("请输入字符串：");    scanf("%s", str);   
      
    getchar();                   // 清除缓存   
      
    printf("请输入要查找的字符：");    scanf("%c", &c);  
      
    printf("\n字符串\"%s\"中含有%d个字符\'%c\'。\n", str, str_chnum(str, c), c);  
  
    return (0);      
}  