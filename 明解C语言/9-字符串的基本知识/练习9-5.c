/* 
    改写代码清单9-9中的put_string函数，不使用putchar函数，而改用printf函数实现同样功能。  
*/  
  
#include <stdio.h>  

// 显示字符串(不换行)  
void put_string(const char str[])  
{  
   unsigned i = 0;  
     
   while (str[i])  
       printf("%c", str[i++]);  
}   

int main(void)  
{  
  char str[100];  
    
  printf("请输入字符串：");  
  scanf("%s", str);  
    
  put_string(str);  
  putchar('\n');  
    
  return (0);      
}  