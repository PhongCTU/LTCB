#include <stdio.h>
int main()
{
    int n, a, b, c, d;
    scanf("%d", &n);
    a = n / 86400;
    b = (n % 86400) / 3600;
    c = n % 86400 % 3600 / 60;
    d = n % 86400 % 3600 % 60;
    if (n >= 86400)
    {
        printf("%d days %02d:%02d:%02d", a, b, c, d);
    }
    else
        printf("%02d:%02d:%02d", b, c, d);
}