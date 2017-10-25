/* 
    根据代码清单9-9的函数，编写put_rstring函数，实现字符串的逆向输出（如将“SEC”显示为“CES”）。  
*/  
  
#include<stdio.h>  

void  put_rstring(const char str[])  
{  
  int i = 0;  
    
  while (str[i])  
      i++;  
    
  while (i + 1) {  
      putchar(str[i]);  
      i--;  
  }        
}  

int main(void)  
{  
  char str[100];  
    
  printf("请输入字符串：");  
  scanf("%s", str);  
    
  printf("\n输入字符串的逆向是：");  
  put_rstring(str);  
    
  putchar('\n');  
    
  return (0);      
}  