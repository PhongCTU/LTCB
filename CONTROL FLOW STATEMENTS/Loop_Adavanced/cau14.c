#include <stdio.h>
int fibonacci(int n)
{
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;

    if (n < 0)
    {
        return -1;
    }
    else if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n - 1; i++)
    {
        printf("%d, ", fibonacci(i));
    }
    printf("%d", fibonacci(n - 1));
}