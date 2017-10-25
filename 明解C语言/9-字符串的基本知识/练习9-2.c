/*
    如何让下述初始化赋值得到的字符串str变成空字符串？请编写程序实现。
        char str[] = "ABC";
*/

#include <stdio.h>  

int main(void)  
{  
  char str[] = "ABC";  
    
  str[0] = '\0';  
    
  printf("字符串str为%s。\n", str);  
    
  system("pause");  
  return (0);      
}  