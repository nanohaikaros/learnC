/*
    创建一个函数，计算2行3列的矩阵ma和3行2列的矩阵mb的乘积，把结果保存到2行2列的矩阵mc中。
    void mul(const int ma[2][3], const int mb[3][2], int mc[2][2]) {...}
*/

#include <stdio.h>

//把2行3列的矩阵ma和mb的和保存到mc中
void mul(int ma[2][3], int mb[3][2], int mc[2][2])
{
    int i, j;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            mc[i][j] = ma[i][j] * mb[i][j];
}

int main(void)
{
    int i, j;
    int ma[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int mb[3][2] = { {6, 3}, {5, 1}, {1, 2} };
    int mc[2][2] = { 0 };

    mul(ma, mb, mc);

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++)
            printf("%3d", mc[i][j]);
        putchar('\n');
    }

    return (0);
}