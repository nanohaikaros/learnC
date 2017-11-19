/* 
    编写如下函数，若字符串str中含有字符c（若含有多个，以先出现的为准），、 
    则返回指向该字符的指针，否则返回NULL。  
        char *str_char(const char *str, int c) {...}
*/  
  
#include <stdio.h>  
  
char *str_chr(const char *str, int c)  
{  
    char *p = NULL;  
      
    while (c == *str) {  
        p = str;  
        str++;  
    }  
    return (p);       
}  
  
int main(void)  
{  
    char str[100];  
    char c;  
      
    printf("请输入字符串：");    scanf("%s", str);   
      
    getchar();                   // 清除缓存   
      
    printf("请输入要查找的字符：");    scanf("%c", &c);  
      
    printf("\n返回的指针地址是：%p。\n", str_chr(str, c));  
      
    return (0);     
}  