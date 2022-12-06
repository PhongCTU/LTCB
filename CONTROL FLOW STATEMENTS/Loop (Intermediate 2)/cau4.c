#include <stdio.h>
int main()
{
    int n;
    float s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        s = s + (float)i / ((float)i + 1);
    }
    printf("%.2f", s);
    return 0;
}