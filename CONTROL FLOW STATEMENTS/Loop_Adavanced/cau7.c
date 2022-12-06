#include <stdio.h>
int main()
{
    int a, b;
    for (a = 0; a <= 43; a++)
        for (b = 0; b <= 43; b++)
            if ((a + b) == 43 && (2 * a + 4 * b == 100))
            {
                printf("%d %d\n", a, b);
            }
}