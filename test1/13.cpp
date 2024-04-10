#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    double* arr = new double[n];
    for (int i = 0; i < n; i++)
    {
        double sum = 0;
        int temp;
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &temp);
            sum += temp;
        }
        arr[i] = sum / m;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%.2f\n", arr[i]);
    }
}