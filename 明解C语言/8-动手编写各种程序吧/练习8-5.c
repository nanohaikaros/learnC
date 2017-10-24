/* 
    不使用递归，定义如下函数，使其返回整数n的阶乘。
        int fact(int n) {...}
*/  
  
#include <stdio.h>  

int fact(int n)  
{  
  int f = 1;  
    
  while (n)  
      f *= n--;   
        
  return f;   
}   

int main(void)  
{  
  int num;  
    
  printf("请输入一个整数：");  
  scanf("%d", &num);  
  printf("\该数阶乘为：%d。\n", fact(num));  
    
  return (0);          
}  