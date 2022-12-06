#include <stdio.h>
int main()
{
    int n;
    int s = 0;
    while (n != 0)
    {
        scanf("%d", &n);
        s = s + n;
    }
    printf("%d", s);
    return 0;
}