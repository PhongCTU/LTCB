#include <stdio.h>
int main()
{
    int a, b, c, max;
    scanf("%d%d%d", &a, &b, &c);
    max = a;
    if (max < b && b > c)
        max = b;
    if (max < c && c > b)
        max = c;

    printf("%d", max);
    return 0;
}