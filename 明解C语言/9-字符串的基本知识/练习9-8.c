/* 
    编写如下函数，实现字符串str的逆向保存（如将“SEC”保存为“CES”）。 
    void rev_string(char str[]) {...}  
*/  
  
#include <stdio.h>  

void rev_string(char str[])  
{  
  int n = 0;  
  int i;  
  char t;  
    
  while (str[n])    n++;  
    
  n--;  
    
  for (i = 0; i < n / 2; i++) {  
      t = str[i];       
      str[i] = str[n - i];  
      str[n - i] = t;  
  }  
}  

int main(void)  
{  
  char str[100];  
    
  printf("请输入字符串：");  
  scanf("%s", str);  
    
  printf("\n字符串现在的顺序是：%s", str);  
    
  rev_string(str);  
     
  printf("\n字符串现在的顺序是：%s\n", str);  
    
  return (0);   
}  
