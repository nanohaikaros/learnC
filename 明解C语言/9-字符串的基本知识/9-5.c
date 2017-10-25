/* 
    格式化字符串“12345”并显示  
*/  
  
#include <stdio.h>  

int main(void)  
{  
  char str[] = "12345";  
    
  printf("%s\n",    str);        // 原样输出  
  printf("%3s\n",   str);        // 至少显示3位   
  printf("%.3s\n",  str);        // 最多显示3位   
  printf("%8s\n",   str);        // 右对齐   
  printf("%-8s\n",  str);        // 左对齐  
    
  return (0);     
}  