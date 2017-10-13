/*分解质因数（5分）
题目内容：
每个非素数（合数）都可以写成几个素数（也可称为质数）相乘的形式，这几个素数就都叫做这个合数的质因数。比如，6可以被分解为2x3，而24可以被分解为2x2x2x3。

现在，你的程序要读入一个[2,100000]范围内的整数，然后输出它的质因数分解式；当读到的就是素数时，输出它本身。

提示：可以用一个函数来判断某数是否是素数。

输入格式:
一个整数，范围在[2,100000]内。

输出格式：
形如：
n=axbxcxd
或
n=n
所有的符号之间都没有空格，x是小写字母x。abcd这样的数字一定是从小到大排列的。

输入样例：
18

输出样例：
18=2x3x3
时间限制：500ms内存限制：32000kb  */


#include <stdio.h>  
  
int is(int i){  
    int ret=1;  
    int j ;  
    for(j=2; j<i; j++){  
        if(i%j == 0){  
            ret = 0;  
            break;  
        }  
    }  
    return ret;  
}  
  
int main(){  
    int x;  
    int n=1;  
    int i;  
    scanf("%d",&x);  
    printf("%d=",x);  
    if(is(x)){  
        printf("%d",x);  
    }  
    else{  
        while(x != 1){  
            for(i=2 ; i<=x ; i++){  
            if(is(i) && x%i == 0){  
                    printf("%d",i);  
                    if(i != x ){  
                        printf("x");  
                        }  
                    x = x/i;  
                    i = 1;   
                }  
            }  
          
        }  
    }  
    return 0;  
}  
