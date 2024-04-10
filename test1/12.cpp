#include <stdio.h>
#include <math.h>

double getDistance(int x1, int y1, int x2, int y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
    int x1, y1, x2, y2, x3, y3;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);
    double a = getDistance(x1, y1, x2, y2) + getDistance(x2, y2, x3, y3) + getDistance(x3, y3, x1, y1);
    printf("%.2f", a);
    return 0;
}