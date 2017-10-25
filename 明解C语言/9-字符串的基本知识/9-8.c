/* 
    判断字符串的长度  
*/  
  
#include <stdio.h>  

// 返回字符串str的长度  
unsigned str_length(const char str[])  
{  
  unsigned len = 0;  
    
  while (str[len])  
      len++;  
     
  return (len);          
}   

int main(void)  
{  
  char st[100];  
    
  printf("请输入字符串：");  
  scanf("%s", st);  
    
  printf("字符串%s的长度为%u。\n", st, str_length(st));  
    
  return (0);     
}  
