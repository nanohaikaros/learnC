/* 
    编写如下函数，返回字符串str中字符c的个数（没有则返回0）。
        int str_chunm(const char str[], intc) {...}
*/  
  
#include <stdio.h>  

int str_chnum(const char str[], int c)  
{  
  int num = 0;  
  int len = 0;  
    
  while (str[len])  
      if (c == str[len++])    num++;     

  return (num);  
}  

int main(void)  
{  
  char st[10];  
  char ch;  
    
  printf("请输入字符串：");  
  scanf("%s", st);  
    
  getchar();        // 清除缓存   
    
  printf("\n请输入要查找的字符：");  
  scanf("%c", &ch);  
    
  printf("\n在字符串%s中字符%c出现了%d次。\n", st, ch, str_chnum(st, ch));  

  return (0);  
}  