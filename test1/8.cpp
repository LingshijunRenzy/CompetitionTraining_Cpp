#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    int y = b / 2 - a;
    int x = a - y;
    printf("%d %d\n", x, y);
}