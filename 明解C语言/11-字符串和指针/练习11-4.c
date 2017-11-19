/* 
    不使用下标运算符，写出与代码清单9-13中的str_toupper函数和str_tolower函数功能相同的函数。  
*/   
  
#include <ctype.h>    
#include <stdio.h>    
    
// 将字符串中的英文字符转换为大写字母    
void str_toupper(char *str)    
{    
    while (*str)  
        *str = toupper(*str++);       
}     
    
// 将字符串中的英文字符转换为小写字母    
void str_tolower(char *str)    
{    
    while (*str)  
        *str = tolower(*str++);      
}    
    
int main(void)    
{    
    char str[100];    
        
    printf("请输入字符串：");    
    scanf("%s", str);    
        
    str_toupper(str);    
    printf("大写字母：%s\n", str);    
        
    str_tolower(str);    
    printf("小写字母：%s\n", str);   
      
    return (0);    
}    