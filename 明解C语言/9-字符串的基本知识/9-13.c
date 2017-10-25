/* 
    对字符串的英文字符进行大小写转换  
*/  
  
#include <ctype.h>  
#include <stdio.h>  
  
// 将字符串中的英文字符转换为大写字母  
void str_toupper(char str[])  
{  
    unsigned i = 0;  
    while (str[i]) {  
        str[i] = toupper(str[i]);  
        i++;  
    }     
}   
  
// 将字符串中的英文字符转换为小写字母  
void str_tolower(char str[])  
{  
    unsigned i = 0;  
    while (str[i]) {  
        str[i] = tolower(str[i]);  
        i++;  
    }     
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