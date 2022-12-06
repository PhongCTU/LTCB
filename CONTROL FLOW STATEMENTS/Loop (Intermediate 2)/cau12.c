#include <stdio.h>
#include <math.h>
int main()
{
    long long n;
    int k = 0;
    scanf("%lld", &n);
    while (pow(2, k) < n)
    {
        k++;
    }
    printf("%d", k);
    return 0;
}