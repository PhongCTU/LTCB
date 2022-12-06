#include <stdio.h>
int main()
{
    int a, b, c, min;
    scanf("%d%d%d", &a, &b, &c);
    min = a;
    if (min > b && b <= c)
    {
        min = b;
    }
    else if (min > c && c <= b)
    {
        min = c;
    }
    printf("%d", min);
    return 0;
}