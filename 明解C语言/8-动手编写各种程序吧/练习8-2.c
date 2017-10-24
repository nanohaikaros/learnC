/* 
    现定义如下函数式宏，其功能为返回x、y中的较大值。
        #define max(x, y)   (((x) > (Y) ? (x) : (y))
    而下面使用了该宏的表达式的功能为计算a、b、c、d中的最大值。
        max(max(a, b), max(c, d))
        max(max(max(a, b), c), d)
    请显示并观察它们是如何展开的。  
*/  
  
#include <stdio.h>  

#define max(x, y) (((x) > (y) ? (x) : (y)))   

int main(void)  
{  
  int a, b, c, d;  
    
  printf("请输入四个整数：");  
  scanf("%d%d%d%d", &a, &b, &c, &d);  
  printf("max(max(a, b), max(c, d))返回值是%d。\n", max(max(a, b), max(c, d)));  
  printf("max(max(max(a, b), c), d)返回值是%d。\n", max(max(max(a, b), c), d));  
    
  system("pause");  
  return (0);      
}  