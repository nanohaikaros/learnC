/*
    通过指针间接地操作身高
*/

#include <stdio.h>

int main(void)
{
    int sato = 178;         //佐藤的身高
    int sanaka = 175;       //佐中的身高
    int hiraki = 165;       //平木的身高
    int masaki = 179;       //真崎的身高

    int *isako, *hiroko;

    isako = &sato;          //isako指向sato
    hiroko = &masaki;       //hiroko指向masaki

    printf("伊沙子喜欢的人的身高：%d\n", *isako);
    printf("洋子喜欢的人的身高：%d\n", *hiroko);

    isako = &sanaka;        //isako指向sanaka

    *hiroko = 180;          //将hiroko指向的对象赋为180

    putchar('\n');
    printf("佐藤的身高：%d\n", sato);
    printf("佐中的身高：%d\n", sanaka);
    printf("平木的身高：%d\n", hiraki);
    printf("真崎的身高：%d\n", masaki);
    printf("伊沙子喜欢的人的身高：%d\n", *isako);
    printf("洋子喜欢的人的身高：%d\n", *hiroko);

    return (0);

}