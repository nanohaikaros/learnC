/* 
    计算标准输入流中出现的行数。
*/  
  
#include <stdio.h>  

int main(void)  
{  
  int ch;  
  int n = 0;  
    
  while ((ch = getchar()) != EOF) {  
      putchar(ch);  
        
      if (ch == '\n')    n++;  
  }  
    
  printf("一共输入了%d行。\n", n);  
  return (0);      
}  