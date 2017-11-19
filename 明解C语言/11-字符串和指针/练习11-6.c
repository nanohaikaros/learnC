/* 
    编写如下函数，实现与库函数atoi、atol、atof相同的功能。  
    int strtoi(const char *nptr) {...}
    long strtol(const char *nptr) {...}
    double strtof(const char *nptr) {...}
*/  
  
int len(const char *nptr)  
{  
    int len = 0;  
    while (*nptr++)    len++;  
    return (len);  
}  
  
  
double power_10(long n)  
{  
    double p = 1;   
      
    if (n > 0)  
        while (--n)    p *= 10;  
    else if (n < 0)  
        while (n++)    p /= 10;  
    else  
        p = 1;  
    return p;  
}  
  
// 字符串转换为整形   
int strtoi(const char *nptr)  
{  
    int n = len(nptr);  
    int num = 0;  
      
    while (*nptr) {  
        num += (*nptr - '0') * power_10(n--);  
        nptr++;  
    }  
    return (num);  
}  
  
// 字符串转换为长整形   
long strtol(const char *nptr)  
{  
    long n = len(nptr);  
    long num = 0;  
      
    while (*nptr) {  
        num += (*nptr - '0') * power_10(n--);  
        nptr++;  
    }  
    return (num);  
}  
  
// 字符串转换为浮点形   
double  strtof(char *nptr)  
{  
    char *p1 = nptr;  
    char *p2;  
    char *p3;  
      
    int n1 = 0;  
    int n2 = 0;  
    int n3;  
      
    double num = 0.0;  
      
    while (*p1 != '.') {  
        n1++;  
        p1++;  
    }  
  
    p2 = ++p1;  
  
    p3 = p2;  
      
    while (*p3++)    n2--;  
      
    while (*nptr != '.') {  
        num += (*nptr - '0') * power_10(n1--);  
        nptr++;  
    }  
      
    n3 = n2;  
      
    while (*p2) {  
        num += (*p2 - '0') * power_10(n3 - ++n2);  
        p2++;  
    }  
      
    return (num);  
}  
  
int main(void)  
{  
    char s[100];  
      
    printf("请输入一个整数：");    scanf("%s", s);  
      
    printf("\n转换成整形：%d\n", strtoi(s));  
      
    printf("\n请输入一个长整数：");    scanf("%s", s);  
      
    printf("\n转换成长整形：%ld\n", strtol(s));  
      
    printf("\n请输入一个浮点数：");    scanf("%s", s);  
      
    printf("\n转换成浮点形：%lf\n", strtof(s));  
  
    return (0);      
}  