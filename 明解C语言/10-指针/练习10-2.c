/*
    编写如下函数，将三个int型整数按升序排列。 
    void sort3(int *n1, int *n2, int *n3) {...}
*/

#include <stdio.h>;

// 2个整数交换
void swap(int *a, int *b)
{
     int t;
     t = *a;
     *a = *b;
     *b = t;
} 

// 排序3个整数 
void sort3(int *n1, int *n2, int *n3)
{
    if (*n1 > *n2)
        swap(n1, n2);
       
    if (*n1 > *n3)
        swap(n1, n3);
        
    if (*n2 > *n3)
        swap(n2, n3);   
}

int main(void)
{
    int x, y, z;
    printf("请输入三个整数：");
    scanf("%d%d%d", &x, &y, &z);
    
    sort3(&x, &y, &z);
    printf("排序后：%d  %d  %d\n", x, y, z);
    
    return (0);    
}