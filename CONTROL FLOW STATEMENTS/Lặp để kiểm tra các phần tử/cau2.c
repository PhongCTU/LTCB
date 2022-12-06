#include <stdio.h>
#include <math.h>
int nt(int n)
{
    int i;
    if (n < 2)
        return 0;
    for (i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    int n, k;
    scanf("%d", &n);
    k = nt(n);
    if (k == 1)
    {
        printf("%d is a prime number.", n);
    }
    else
        printf("%d is not a prime number.", n);
}