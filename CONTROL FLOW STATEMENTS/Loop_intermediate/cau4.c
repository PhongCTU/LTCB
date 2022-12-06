#include <stdio.h>
#include <math.h>
long long nt(long long n)
{
    long long i;
    if (n < 2)
        return 0;
    for (i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    long long n;
    int c;
    scanf("%lld", &n);
    c = nt(n);
    if (c == 1)
    {
        printf("%lld is a prime number.", n);
    }
    else
        printf("%lld is not a prime number.", n);
    return 0;
}