/* 
    编写如下函数，将字符串str中的数字字符全部删除。 
    void del_digit(char str[]) {...}  
*/  
  
#include <stdio.h>  

// 将字符串str中的数字字符全部删除  
void del_digit(char str[])  
{  
  unsigned i = 0;  
  unsigned j;  
    
  while (str[i])  {  
      if (str[i] >= '0' && str[i] <= '9') {  
          j = i;   
          while (str[j]) {  
              str[j] = str[j + 1];  
              j++;  
          }    
          i--;     
      }   
      i++;  
  }  
}   

int main(void)  
{  
  char str[100];  
    
  printf("请输入字符串：");  
  scanf("%s", str);  
    
  printf("\n字符串是：%s\n", str);  
    
  del_digit(str);  
        
  printf("删除数字后的字符串是：%s\n", str);  
  return (0);  
}  