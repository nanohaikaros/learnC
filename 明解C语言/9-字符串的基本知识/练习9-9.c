/* 
    编写如下函数，将字符串str转换为空字符串。 
    void null_string(char str[]) {...}  
*/  
  
#include <stdio.h>  

// 将字符串str转换为空字符串  
void null_string(char str[])  
{  
  str[0] = '\0';  
}  

int main(void)  
{  
    
  char str[100];  
    
  printf("请输入字符串：");  
  scanf("%s", str);  
    
  printf("\n字符串是：%s\n", str);  
    
  null_string(str);  
        
  printf("转换为空字符串后：%s\n", str);  
    
  return (0);   
}  
