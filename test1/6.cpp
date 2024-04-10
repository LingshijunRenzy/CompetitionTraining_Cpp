#include <stdio.h>

int main()
{
    int n = 0, d = 0;
    scanf("%d", &n);
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &d);
        sum += d;
    }
    printf("%.2f\n", sum / n);
}