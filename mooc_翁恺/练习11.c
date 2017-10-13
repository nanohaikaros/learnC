/*  排序（10分）
题目内容：
程序读入一个正整数n（0<n<=100000），然后读入n个整数，均为32位下的整数。输出对这个整数排序后的结果，每个整数后面有一个空格。

输入格式:
一个表示个数的正整数n，和n个整数，以空格间隔。

输出格式：
排序后的n的整数，每个整数后面有一个空格。

输入样例：
6 2 23 54 12 6 8

输出样例：
2 6 8 12 23 54
时间限制：500ms内存限制：32000kb */

#include <stdio.h>
#include <stdlib.h>
int main(){
    int *a,n,i,j,m;
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",a+i);
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
        if (a[i]>a[j]){
            m=a[i];a[i]=a[j];a[j]=m;
        }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
