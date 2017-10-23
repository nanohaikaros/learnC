/*
    求出两点间的距离
*/

#include <math.h>
#include <stdio.h>

//求出点（x1，y1）和点（x2，y2）之间的距离
double dist(double x1, double y1, double x2, double y2)
{
    return (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
}

int main(void)
{
    double x1, y1;  //点1
    double x2, y2;  //点2

    printf("《点1》X坐标："); scanf("%lf", &x1);
    printf("      Y坐标："); scanf("%lf", &y1);
    printf("《点2》X坐标："); scanf("%lf", &x2);
    printf("      Y坐标："); scanf("%lf", &y2);

    printf("2点之间的距离为%f。\n", dist(x1, y1, x2, y2));

    return (0);
}