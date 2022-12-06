#include <stdio.h>
int main()
{
    int n;
    float a, b;
    scanf("%d", &n);
    a = (float)n / 100;
    b = (float)n / 100000;
    printf("%dcm = %.3fm = %.3fkm", n, a, b);
    return 0;
}