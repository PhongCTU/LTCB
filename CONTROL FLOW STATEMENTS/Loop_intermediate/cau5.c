#include <stdio.h>
int main()
{
    int n;
    float x, s = 1;
    scanf("%f%d", &x, &n);
    for (int i = 1; i <= n; i++)
    {
        s = s * x;
    }
    printf("%.2f", s);
    return 0;
}