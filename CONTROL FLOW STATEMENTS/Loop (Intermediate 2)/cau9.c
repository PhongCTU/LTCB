#include <stdio.h>
int main()
{
    float x;
    float k = 1;
    int n;
    scanf("%f%d", &x, &n);
    for (int i = 1; i <= n; i++)
    {
        k = k * x;
    }
    printf("%.2f", k);
    return 0;
}