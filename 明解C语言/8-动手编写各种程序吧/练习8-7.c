/* 
    改写代码清单8-9的程序，将数字字符的出现次数用并排的*表示。  
*/   
  
#include <stdio.h>  

int main(void)  
{  
  int i, ch;  
  int cnt[10] = {0};                          // 数字字符的出现次数  
    
  while (1) {                                 // 死循环  
      ch = getchar();  
      if (ch == EOF) break;  
        
      if (ch >= '0' && ch <= '9')  
          cnt[ch - '0']++;  
  }      
    
  puts("数字字符的出现次数");  
  for (i = 0; i < 10; i++) {   
      printf("'%d' : ", i);  
        
      while (cnt[i]--)  
          printf("*");  
        
      putchar('\n');     
  }   
    
  return(0);   
}   
