#include <stdio.h>
int main()
{
    float s, a = 0;
    int n = 0;
    scanf("%f", &s);
    while (a <= s)
    {
        n++;
        a = a + 1 / (float)n;
    }
    printf("%d", n);
}