#include <stdio.h>
int main()
{
    int n, i;
    float max, min;
    float a[100], s = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%f", &a[i]);
        s = s + a[i];
    }
    max = a[1];
    for (i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] < a[j])
            {
                max = a[j];
            }
        }
    }
    min = a[1];
    for (i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] > a[j])
            {
                min = a[j];
            }
        }
    }
    printf("%.2f ", s / n);
    printf("%.2f ", max);
    printf("%.2f", min);
}