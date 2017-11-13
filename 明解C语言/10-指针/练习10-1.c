/*
    编写如下函数，求出并设置y年m月d日的前一天或后一天的日期（能正确判断闰年）  
    void yesterday(int *y, int *m, int *d) {...}
    void tomorrow(int *y, int *m, int *d) {...} 
*/

#include <stdio.h>

// 判断闰年
int is_leap(int year)
{
    int i = 0;
    
    if (((year % 4) == 0 && (year % 100) != 0) || (year % 400 == 0))
        i = 1;
    return (i);
}

// 返回当月天数
int days(int year, int month)
{
    int i;
    
    switch (month) {
        case 4:
        case 6:
        case 9:
        case 11: i = 30; break; 
        case 2: if (is_leap(year)) i = 29; else i = 28; break;
        default: i = 31; break;
    }
    return (i);
}
 
// 求出前一天
void yesterday(int *y, int *m, int *d)
{   
    (*d)--;
    
    if (!(*d)) {
        (*d) = days(*y, --(*m));
    }
    
    if (!(*m)) {
        (*y)--;
        (*m) = 12; 
    }   
} 

// 求出后一天
void tomorrow(int *y, int *m, int *d)
{
    (*d)++;
    
    if ((*d) > days(*y, *m)) {
        (*d) = 1;
        (*m)++;       
    }
    
    if ((*m) > 12) {
        (*y)++;
        (*m) = 1;
    } 
         
}

int main(void)
{
    int year, month, day;
    printf("请输入年月日: ");
    scanf("%d%d%d", &year, &month, &day);
    putchar('\n');
    
    yesterday(&year, &month, &day);
    printf("前一天：%d %2d %2d\n", year, month, day);
    tomorrow(&year, &month, &day);
    printf("输入日：%d %2d %2d\n", year, month, day);
    tomorrow(&year, &month, &day);
    printf("后一天：%d %2d %2d\n", year, month, day);
    
    return (0); 
}