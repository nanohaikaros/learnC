/*完数（5分）
题目内容：
一个正整数的因子是所有可以整除它的正整数。而一个数如果恰好等于除它本身外的因子之和，这个数就称为完数。例如6=1＋2＋3(6的因子是1,2,3)。

现在，你要写一个程序，读入两个正整数n和m（1<=n<m<1000），输出[n,m]范围内所有的完数。

提示：可以写一个函数来判断某个数是否是完数。

输入格式:
两个正整数，以空格分隔。

输出格式：
其间所有的完数，以空格分隔，最后一个数字后面没有空格。如果没有，则输出一行文字：
NIL
（输出NIL三个大写字母加回车）。

输入样例：
1 10

输出样例：
6
时间限制：500ms内存限制：32000kb  */

/*
# include <stdio.h> 
int w(int n) 
{  
int i,s = 0;  	
for ( i = 1; i < n; ++i) { 		
	if ( n%i == 0){ 			
		s += i; 		
		}
	} 	
	if ( n == s) 	
		return 1; 	
	else  	
		return 0; 
} 
int main() { 	
	int i,j,k,c = 0; 	
	scanf("%d%d",&i,&j); 	
	for ( k = i; k <= j; ++k) { 		
		if (w(k)) { 			
			if ( c == 2) 			
			printf(" "); 			 			
			printf("%d",k); 				
			c = 1; 			    
			c++; 		 		
			} 	
		} 	
		if ( k == j+1 && c != 0) 	
			printf("\n"); 	
		if (c == 0 ) 	
			printf("NILn"); 	
	return 0; 
}
*/

#include <stdio.h>
#include <math.h>
int perfNumber(int i);
int main(int argc, const char * argv[]) {
    // insert code here...
    // TODO Auto-generated method stub
    int n,m;
    scanf("%d %d",&n,&m);
    int b=0;
    for(int i=n+1;i<m;i++)
    {
         
        if(perfNumber(i))
        {
            if(!b)
            {
            printf("%d",i);
            b=1;
            }
            else
            {
                    printf(" %d",i);
            }
        }
    }
    if(!b)
    {
        printf("NIL");
    }
    printf("\n");
}
int perfNumber(int i)
{
    int per=1;
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {
            per+=j;
        }
    }
    if(per!=i)
    {
        i=0;
    }
        return i;
}
