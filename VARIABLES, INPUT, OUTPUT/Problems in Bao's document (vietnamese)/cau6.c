#include <stdio.h>
int main()
{
    float d;
    scanf("%f", &d);
    float cv, s;
    cv = 2 * 3.14 * d / 2;
    s = d * d * 3.14 / 4;
    printf("Chu vi: %.2f\n", cv);
    printf("Dien tich: %.2f", s);
    return 0;
}