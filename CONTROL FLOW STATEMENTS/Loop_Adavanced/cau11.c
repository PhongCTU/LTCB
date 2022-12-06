#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, sum = 1;
    for (i = 2; i < n; i++)
        if (n % i == 0)
            sum += i;
    if (sum == n)
        printf("YES");
    else
        printf("NO");
}