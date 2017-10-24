/* 
    求出从n个不同整数中取出r个整数的组合数 
        int combination(int n, int r) {...} 
*/  
  
#include <stdio.h>  

int combination(int n, int r)  
{  
  int c;  
   
  if (r == 0 || n == r)  
      c = 1;  
  else if (r == 1)  
      c = n;  
  else  
      c = combination(n - 1, r - 1) + combination(n - 1, r);  
    
  return (c);  
}  

int main(void)  
{  
  int n, r;  
  printf("请输入个数：");    scanf("%d", &n);  
  printf("请输组合数：");    scanf("%d", &r);  
    
  printf("%d的%d组合结果是：%d。\n", n, r, combination(n, r));  

  return (0);      
}   