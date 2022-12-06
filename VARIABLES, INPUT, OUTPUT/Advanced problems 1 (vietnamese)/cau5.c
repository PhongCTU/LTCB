#include <stdio.h>
int main()
{
    int r1, r2, r3;
    float r;
    scanf("%d%d%d", &r1, &r2, &r3);
    r = (float)r1 + (1 / ((1 / (float)r2) + (1 / (float)r3)));
    printf("%.2f", r);
    return 0;
}