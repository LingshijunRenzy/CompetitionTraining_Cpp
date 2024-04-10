#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    scanf("%d %d", &x, &y);
    // 求最大公约数
    if(x < y)
    {
        int t = x;
        x = y;
        y = t;
    }
    int r = x % y;
    while(r != 0)
    {
        x = y;
        y = r;
        r = x % y;
    }
    printf("%d\n", y);
}