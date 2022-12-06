#include <stdio.h>
int main()
{
    long long n;
    int dem = 0;
    scanf("%lld", &n);
    while (n != 0)
    {
        dem++;
        n = n / 10;
    }
    printf("Number of digits: %d", dem);
    return 0;
}