/*念整数（5分）
题目内容：
你的程序要读入一个整数，范围是[-100000,100000]。然后，用汉语拼音将这个整数的每一位输出出来。
如输入1234，则输出：
yi er san si
注意，每个字的拼音之间有一个空格，但是最后的字后面没有空格。当遇到负数时，在输出的开头加上“fu”，如-2341输出为：
fu er san si yi

输入格式:
一个整数，范围是[-100000,100000]。

输出格式：
表示这个整数的每一位数字的汉语拼音，每一位数字的拼音之间以空格分隔，末尾没有空格。

输入样例：
-30

输出样例：
fu san ling
时间限制：500ms内存限制：32000kb  */


#include <stdio.h>
#include <math.h>
main()
{
    int x;
    scanf("%d", &x);
    int cnt = 0;
    int t;
    int y;

    if (x < 0)
    {
        t = -x;
    }
    else t = x;
    
    do
    {
        t = t / 10;
        cnt++;
    } while (t > 0);
    
    y = pow(10, (cnt - 1));
    
    if (x < 0)
    {
        printf("fu ");
        t = -x;
    }
    else t = x;
    
    do
    {
        switch (t / y)
        {
        case 0:printf("ling");break;
        case 1:printf("yi");break;
        case 2:printf("er");break;
        case 3:printf("san");break;
        case 4:printf("si");break;
        case 5:printf("wu");break;
        case 6:printf("liu");break;
        case 7:printf("qi");break;
        case 8:printf("ba");break;
        case 9:printf("jiu");break;
        }
        if (y > 9)
        {
            printf(" ");
        }
        t = t%y;
        y = y / 10;
    } while (y > 0);
    
    return 0;
}
