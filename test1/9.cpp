#include <stdio.h>

int main()
{
    int i = 0;
    scanf("%d", &i);
    int sum = 0;
    for (int j = 1; j <= i; j++)
    {
        sum += j * j;
    }
    printf("%d\n", sum);
}