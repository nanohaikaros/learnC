/*
    函数的参数和指针
*/

#include <stdio.h>

//洋子（让身高不到180cm的人长到180cm）
void hiroko(int *height)
{
    if (*height < 180)
        *height = 180;
}

int main(void)
{
    int sato = 178;         //佐藤的身高
    int sanaka = 175;       //佐中的身高
    int hiraki = 165;       //平木的身高
    int masaki = 179;       //真崎的身高

    hiroko(&masaki);

    printf("佐藤的身高：%d\n", sato);
    printf("佐中的身高：%d\n", sanaka);
    printf("平木的身高：%d\n", hiraki);
    printf("真崎的身高：%d\n", masaki);

    return (0);
}