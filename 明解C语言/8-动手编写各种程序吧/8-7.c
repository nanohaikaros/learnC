/* 
    求出最大公约数  
*/  
  
#include <stdio.h>  

// 返回vx和vy的最大公约数（vx >= vy）   
int gcdf(int vx, int vy)  
{  
  return (vy == 0 ? vx : gcdf(vy, vx % vy));      
}  

// 求出va和vb的最大公约数  
int gcd(int va, int vb)  
{  
  return (va > vb ? gcdf(va, vb) : gcdf(vb, va)) ;     
}   

int main(void)  
{  
  int n1, n2;  
    
  puts("请输入两个整数。");  
  printf("整数1：");    scanf("%d", &n1);  
  printf("整数2：");    scanf("%d", &n2);  
    
  printf("最大公约数是%d。\n", gcd(n1, n2));    
    
  return (0);    
}  