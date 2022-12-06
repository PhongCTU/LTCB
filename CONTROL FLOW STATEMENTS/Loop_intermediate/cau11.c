#include <stdio.h>
long long gt(int n)
{
    long long i, g = 1;
    for (i = 1; i <= n; i++)
        g = g * i;
    return g;
}
long long tohop(int n, int k)
{
    return gt(n) / (gt(k) * gt(n - k));
}
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%lld ", tohop(i, j));
        }
        printf("\n");
    }
}