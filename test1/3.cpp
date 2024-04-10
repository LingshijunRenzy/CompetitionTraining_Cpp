#include <stdio.h>

int main()
{
    int m = 0;
    scanf("%d", &m);
    int n = 0, k = 0;
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &n, &k);
        int *queue = new int[n];
        for (int j = 0; j < n; j++)
        {
            if (j < k)
            {
                scanf("%d", &queue[0]);
            }
            else
            {
                scanf("%d", &queue[j - k]);
            }
        }
        for (int j = n - k; j < n; j++)
        {
            queue[j] = 0;
        }
        for (int j = 0; j < n; j++)
        {
            printf("%d ", queue[j]);
        }
        printf("\n");
        delete[] queue;
    }
}