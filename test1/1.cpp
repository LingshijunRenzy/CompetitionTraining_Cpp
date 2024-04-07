#include <stdio.h>

// 斐波那契数列
int main()
{
    int n;
    scanf("%d", &n);
    int a = 1, b = 1;
    int sum = 0;
    if (n == 1 || n == 2)
    {
        printf("1\n");
        return 0;
    }
    for (int i = 0; i < n-2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("%d\n", sum);
    return 0;
}