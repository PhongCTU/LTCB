#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int k = 0;
    scanf("%d", &n);
    while (pow(2, k) < n)
    {
        k++;
    }
    printf("%d", k);
    return 0;
}