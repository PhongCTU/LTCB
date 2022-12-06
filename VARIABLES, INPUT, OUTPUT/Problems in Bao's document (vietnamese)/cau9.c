#include <stdio.h>
int main()
{
    int n;
    float t;
    scanf("%d", &n);
    t = 32 + (float)n * 9 / 5;
    printf("%d do C = %.1f do F", n, t);
    return 0;
}