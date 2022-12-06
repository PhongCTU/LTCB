#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    long long S = 1;
    for (i = 1; i <= n; i++)
        S = S * i;

    printf("%d! = %lld\n", n, S);

    return 0;
}