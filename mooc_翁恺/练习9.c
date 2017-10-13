/*字符串比对（10分）
题目内容：
题目说起来很简单，你会读到两个字符串，每个字符串占据一行，每个字符串的长度均小于10000字符，而且第一个字符串的长度小于第二个字符串的。你的程序要找出第一个字符串在第二个字符串中出现的位置，输出这些位置，如果找不到，则输出-1。

注意，第一个字符的位置是0。

注意，第一个字符串在第二个字符串中的位置可能不止一处。

注意，字符串中可能含有空格。

注意，两个字符串的长度一定大于0。

输入格式:
两个字符串，一行一个。

输出格式：
第一个字符串在第二个字符串中出现的位置，按照从小到到的顺序排列，每个数字后面有一个空格。
如果在第二个字符串中找不到第一个字符串，则输出-1。

输入样例：
abba
ababbba abbabbabbabbaacc

输出样例：
8 11 14 17
时间限制：500ms内存限制：32000kb  */


#include<stdio.h>
#include<string.h>
int main(void) {
    char str[1000];
    char str1[1000];
    gets(str);
    gets(str1);
    int n=0;
    if(strstr(str1,str)==NULL){
            printf("-1");
    }else{
        while(strstr(str1+n,str)!=NULL){
                char *p=strstr(str1+n,str);
        char c=*p;//保存这个部分的字符串
        *p='\0';//将后面的全部砍掉，只留下前部分
        printf("%d ",strlen(str1));//输出前面部分的长度
        n=strlen(str1);
        *p=c;//还原原来的字符串
        n++;
        }
        }
    return 0;
}
