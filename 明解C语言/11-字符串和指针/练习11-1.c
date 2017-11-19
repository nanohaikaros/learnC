/* 
    依次显示字符串中的字符 (不使用下标运算符) 
*/  
  
#include <stdio.h>  
  
// 显示字符串(不换行)  
void put_string(const char str[])  
{      
     while (*str)  
         putchar(*str++);  
}   
  
int main(void)  
{  
    char str[100];  
      
    printf("请输入字符串：");  
    scanf("%s", str);  
      
    put_string(str);  
    putchar('\n');  
  
    return (0);      
}  