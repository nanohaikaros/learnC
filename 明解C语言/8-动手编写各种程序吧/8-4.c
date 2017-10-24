/* 
    响铃并显示的宏定义（误例）  
*/  
  
#include <stdio.h>  

#define putsa(str)  ( putchar('\a'), puts(str) )  

int main(void)  
{  
  int na;  
    
  printf("请输入一个整数：");  
  scanf("%d", &na);  
    
  if (na)  
      putsa("这个数不是0。");   
  else  
      putsa("这个数是0。");  

  return (0);     
}  