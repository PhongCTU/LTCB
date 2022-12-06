#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int i, flat = 0;
    scanf("%d", &n);
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flat = 1;
            break;
        }
    }
    if (flat == 1)
    {
        printf("%d la hop so.", n);
    }
    else
        printf("%d khong phai la hop so.", n);
    return 0;
}