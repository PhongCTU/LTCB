#include <stdio.h>
int main()
{
    int n, a, b, c;
    scanf("%d", &n);
    a = n / 365;
    b = n % 365 / 7;
    c = n % 365 % 7;
    printf("%d days = %d year(s) %d week(s) and %d day(s).", n, a, b, c);
    return 0;
}