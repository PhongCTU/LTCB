long long gt(long long n)
{
    long long i;
    long long g = 1;
    for (i = 1; i <= n; i++)
        g = g * i;
    return g;
}
long long tohop(long long n, long long k)
{
    return gt(n) / (gt(k) * gt(n - k));
}
int main()
{
    long long n, i, j;
    scanf("%lld", &n);
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%5lld", tohop(i, j));
        }
        printf("\n");
    }
    return 0;
}