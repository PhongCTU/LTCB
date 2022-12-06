#include <stdio.h>
int main()
{
    int n;
    float t;
    scanf("%d", &n);
    t = ((float)n - 32) * 5 / 9;
    printf("%d do F = %.2f do C", n, t);
    return 0;
}