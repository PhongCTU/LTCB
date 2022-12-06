#include <stdio.h>
int main()
{
    int n;
    float s = 0, a[100];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%f", &a[i]);
        s = s + a[i];
    }
    printf("%.2f ", s);
    printf("%.2f", s / n);
    return 0;
}