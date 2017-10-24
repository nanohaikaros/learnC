/* 
    从标准输入流复制到标准输出流  
*/  
  
#include <stdio.h>  

int main(void)  
{  
  int ch;  
    
  while ((ch = getchar()) != EOF)  
      putchar(ch);  

  return (0);      
}  