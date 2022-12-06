#include <stdio.h>
int mu3(int n)
{
    int m = n, tong = 0;
    while (m != 0)
    {
        int k = m % 10;
        tong += k * k * k;
        m /= 10;
    }
    if (tong == n)
        return 1;
    return 0;
}
int main()
{
    for (int i = 100; i <= 999; i++)
        if (mu3(i))
            printf("%3d ", i);
}