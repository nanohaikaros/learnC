/*
    创建一个函数，连续发出no次警报。
        void alert (int no) {...}
*/

#include <stdio.h>

void alert(int no)
{
    printf("\a");
}

int main(void)
{
    int no;

    printf("发出几次警报：%d。", no);
    scanf("%d", &no);
    while (no-- > 0)
        alert(no);

    return (0);
}