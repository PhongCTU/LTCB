#include <stdio.h>
int main()
{
    int n;
    int dem = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        dem++;
        n = n / 10;
    }
    printf("%d", dem);
}