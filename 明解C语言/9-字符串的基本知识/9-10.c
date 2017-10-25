/* 
    计算字符串中的数字字符数  
*/  
  
#include <stdio.h>  

// 将字符串str中的数字字符保存至数组cnt  
void str_dcount(const char str[], int cnt[])   
{  
  unsigned i = 0;  
  while (str[i]) {  
      if (str[i]) {  
          if (str[i] >= '0' && str[i] <= '9')  
              cnt[str[i] - '0']++;  
          i++;  
      }  
  }       
}  

int main(void)  
{  
  int i;  
  int dcnt[10] = {0};  
  char str[100];  
    
  printf("请输入字符串：");  
  scanf("%s", str);  
    
  str_dcount(str, dcnt);  
    
  puts("数字字符的出现次数");  
  for (i = 0; i < 10; i++)  
      printf("'%d' : %d\n", i, dcnt[i]);  
    
  return (0);      
}  