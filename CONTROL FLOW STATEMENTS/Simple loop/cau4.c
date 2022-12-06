#include <stdio.h>
int main()
{
    int n;
    int s = 0, a = 3;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        s = s + a;
    }
    printf("%d", s);
    return 0;
}