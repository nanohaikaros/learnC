/* 
    编写如下函数，若字符串str中含有字符c（若含有多个，以先出现的为准）， 
    则返回该元素的下标值，否则返回-1。
        int str_char(const char str[], int c) {...}
*/  
  
#include <stdio.h>  

int str_char(const char str[], int c)  
{  
  int i = 0;  
  while (str[i]) {  
      if (c == str[i])  
          break;  
      i++;  
  }  
    
  if (!str[i])    i = -1;  
            
  return (i);  
}  

int main(void)  
{  
  char st[10];  
  char ch;  
  int pos;  
    
  printf("请输入字符串：");  
  scanf("%s", st);  
    
  getchar();        // 清除缓存   
    
  printf("\n请输入要查找的字符：");  
  scanf("%c", &ch);  
      
  pos = str_char(st, ch);   
    
  if (-1 == pos)  
      printf("\n在字符串%s中未出现字符%c。\n", st, ch);  
  else  
      printf("\n在字符串%s中字符%c首次出现在第%d位。\n", st, ch, pos + 1);  
        
  return (0);  
}  
