#include <stdio.h>
int main()
{
    int n, i;
    float a[100], s = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%f", &a[i]);
        s = s + a[i];
    }
    printf("%.2f ", s);
    printf("%.2f", s / n);
}