/* 
    请定义一个函数式宏swap(type, a, b)以使type型的两值互换。
    例如：假设int型变量x、y的值分别为5、10，那么调用swap(int, x, y)后，x、y中应分别保存10、5。  
*/  
  
#include <stdio.h>  

#define swap(type, a, b) type t; t = a; a = b; b = t;  

int main(void)  
{  
  int a, b;  
  double c, d;  
     
  printf("请输入两个整数：");  
  scanf("%d%d", &a, &b);  
  printf("\n前：a = %d, b = %d\n", a, b);  
  swap(int, a, b)  
  printf("\n后：a = %d, b = %d\n", a, b);  
  /* 
  printf("请输入两个实数："); 
  scanf("%lf%lf", &c, &d); 
  printf("\n前：c = %f, d = %f\n"); 
  swap(double, c, d) 
  printf("\n后：c = %f, d = %f\n");  
  */  

  return (0);     
}  