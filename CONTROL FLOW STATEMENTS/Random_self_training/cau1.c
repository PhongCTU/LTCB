#include <stdio.h>
int uc(int a, int b)
{
    if (b == 0)
        return a;
    return uc(b, a % b);
}
int main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = uc(a, b);
    if (c < 0)
    {
        printf("GCD(%d, %d) = %d", a, b, -c);
    }
    else
        printf("GCD(%d, %d) = %d", a, b, c);
    return 0;
}