#include <stdio.h>
int main()
{
    double e;
    scanf("%lf", &e);
    double pi;
    int n;
    n = 0;
    double t;
    t = 4 / (2 * (double)n + 1);
    pi = 0;
    while (t > e)
    {
        if (n % 2 == 0)
            pi += t;
        else
            pi -= t;
        n++;
        t = 4 / (2 * (double)n + 1);
    }
    printf("pi = %f", pi);
}