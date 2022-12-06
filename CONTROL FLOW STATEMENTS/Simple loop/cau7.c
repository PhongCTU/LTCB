#include <stdio.h>
long long gt(int n)
{
    long long i, gt = 1;
    for (i = 1; i <= n; i++)
    {
        gt = gt * i;
    }
    return gt;
}
int main()
{
    int n;
    scanf("%d", &n);
    long long s;
    s = gt(n);
    printf("%d! = %lld", n, s);
    return 0;
}