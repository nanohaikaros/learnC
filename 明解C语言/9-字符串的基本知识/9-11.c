/* 
    字符串数组 (函数版) 
*/  
  
#include <stdio.h>  

// 显示字符串数组  
void put_strary(const char st[][6], int n)  
{  
  int i;  
  for (i = 0; i < n; i++)  
      printf("st[%d] = \"%s\"\n", i, st[i]);       
}   

int main(void)  
{  
  char cs[][6] = {"Turbo", "NA", "DOHC"};  
    
  put_strary(cs, 3);    
        
  return (0);  
}  
