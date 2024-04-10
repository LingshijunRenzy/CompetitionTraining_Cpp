#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // 胡同的门牌号从1开始编号，胡同里各家门牌号的和减去三倍他家的门牌号码的结果刚好为n
    // 总户数m
    int m = 1;
    // 门牌号x
    int x = 1;
    for (m = 1; m < n; m++)
    {
        for (x = 1; x < n; x++)
        {
            if (m * (m + 1) / 2 - 3 * x == n)
            {
                printf("%d %d", m, x);
                return 0;
            }
        }
    }
    printf("Impossible!");
}