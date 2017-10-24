/* 
    定义一个函数式宏diff(x, y),返回x、y二值之差。  
*/  
  
#include <stdio.h>  

#define diff(x, y) x - y  

int main(void)  
{  
  int n1, n2;  
    
  printf("请输入两个整数：");  
  scanf("%d%d", &n1, &n2);  
  printf("两数之差是%d。\n", diff(n1, n2));  
    
  system("pause");  
  return (0);      
}  